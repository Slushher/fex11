#include "../headers/window.h"
#include "../headers/directory.h"
#include "../headers/image.h"

int main(int argc, char *argv[]) 
{
    initDisplay();
    initWindow();
    initImage(returnDisplayHandle(), "image.xpm");
    windowUpdate();
    return 0;
}