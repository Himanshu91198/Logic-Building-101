/*

1: Open existing file.

int open(char *File_name, int Mode);
File name : Name of file that you want to open
Mode : Mode in which you want to open the file
    O_RDONLY


*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

    int fd = 0;

    fd = open("Demo.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open the file \n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n", fd);
    }

    close(fd);
    return 0;
}