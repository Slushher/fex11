#ifndef EVENT_LOOP_H
#define EVENT_LOOP_H

#include <stdbool.h>
#include <stdio.h>
#include <X11/Xlib.h>

bool event_loop(Display* display, XEvent event);

#endif