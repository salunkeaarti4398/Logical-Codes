#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

// O_RDONLY     Open for reading
// O_WRONLY     Open for writing
// O_RDWR       Open for reading and writing


int main()
{
    char Fname[20];
    int fd = 0, Length = 0;
    char Data[100];

    printf("Enter the File name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        return -1;
    }

    // read(kuthun,khashyat,kiti);
    read(fd,Data,13);

    printf("Data From File is %s",Data);

    return 0;
}