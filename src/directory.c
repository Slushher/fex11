#include "../headers/directory.h"

void print_dir(char *src)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(src);
    if (d) 
	{
        while ((dir = readdir(d)) != NULL) 
        {
            printf("%s\n", dir->d_name);
        }
		closedir(d);
	}
    else
    {
        printf("directory does not exist!\n");
    }
}
