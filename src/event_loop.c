#include "../headers/event_loop.h"
#include "../headers/image.h"
#include "../headers/window.h"

bool event_loop(Display *display, XEvent event)
{
    while (1) {
        XNextEvent(display, &event);
        if (event.type == Expose) {
            
        }
        if (event.type == KeyPress){
            printf("doo doo\n");
            //break;
        }
        displayImage(returnDisplayHandle(), returnWindowHandle());
    }
}