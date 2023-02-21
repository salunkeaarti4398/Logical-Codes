#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

// O_RDONLY     Open for reading
// O_WRONLY     Open for writing
// O_RDWR       Open for reading and writing

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the File name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {
        printf("File is Succesfully Opened with FD %d\n",fd);
    }

    return 0;
}