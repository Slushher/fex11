#include "../headers/image.h"
#include "../headers/window.h"

XImage *img;
GC g;

void initImage(Display *display, char *filepath)
{
    //todo
    if(XpmReadFileToImage(display, filepath, &img, NULL, NULL)){
        printf("error reading file\n");
    }
}

void displayImage(Display *display, Window window)
{
    windowResize(1920/2-img->width/2, 1080/2-img->height/2, img->width, img->height);
    g = XCreateGC (display, window, 0, NULL);
    XPutImage(display, window, g, img, 0, 0, 0, 0, img->width, img->height);
}
