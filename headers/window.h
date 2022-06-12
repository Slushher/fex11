#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   
#ifndef WINDOW_H
#define WINDOW_H

void initDisplay();
void initWindow();
void windowUpdate();
void windowResize(int x, int y, unsigned int width, unsigned int height);
Display *returnDisplayHandle();
Window returnWindowHandle();


#endif