#include<stdio.h>
#include<stdlib.h>

int CreateFile(char Name[])
{
    int fd = 0;
    fd = creat(Name,0777);
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the File name that you want to create\n");
    scanf("%s",Fname);

    fd = CreateFile(Fname);

    if(fd == -1)
    {
        printf("Unable to create File\n");
    }
    else
    {
        printf("File is Succesfully created with FD %d\n",fd);
    }

    return 0;
}