#ifndef IMAGE_H
#define IMAGE_H

#include <stdbool.h>
#include <stdio.h>
#include <X11/xpm.h>
#include <X11/Xlib.h>

void initImage(Display *display, char *filepath);
void displayImage(Display *display, Window window);

#endif