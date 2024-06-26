#include "../headers/window.h"
#include "../headers/event_loop.h"
#include <X11/Xlib.h>

Display *display;
Window window;
XEvent event;

int screenNum;
int window_w = 640, window_h = 480;
int screen_w, screen_h;

const char *window_name = "fex11";

void initDisplay()
{
    display = XOpenDisplay(NULL);
    if (display == NULL) {
        fprintf(stderr, "Cannot open display\n");
        exit(1);
    }
    screenNum = DefaultScreen(display);
    screen_w = XDisplayWidth(display, screenNum);
    screen_h = XDisplayHeight(display, screenNum);

}

void initWindow()
{
    window = XCreateSimpleWindow(display, RootWindow(display, screenNum), 0, 0, window_w, window_h, 1,BlackPixel(display, screenNum), WhitePixel(display, screenNum));
    XStoreName(display, window, window_name);
    XSelectInput(display, window, ExposureMask | KeyPressMask);
    XMapWindow(display, window);
    XMoveWindow(display, window, (screen_w/2-window_w/2), (screen_h/2-window_h/2));
}

void windowUpdate()
{
    event_loop(display, event);
    XCloseDisplay(display);
}

void windowResize(int x, int y, unsigned int width, unsigned int height)
{
    XMoveResizeWindow(display, window, x, y, width, height);
}

Display *returnDisplayHandle()
{
    return display;
}

Window returnWindowHandle()
{
    return window;
}