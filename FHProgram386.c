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

    printf("Enter the data that you want to write in the file :\n");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);

    // write(kashyat,kay,kiti);
    write(fd,Data,Length);

    return 0;
}