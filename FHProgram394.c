#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0, Length = 0,Count =0,iCnt = 0;
    char Data[100];

    printf("Enter the File name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open\n");
        return -1;
    }

    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        for(iCnt = 1;iCnt < Length;iCnt++)
        {
            if((Data[iCnt] >= 'a') && (Data[iCnt] <= 'z'))
            {
                Count++;
            }
        }    
    }
    

    printf("Number of Small cases are :%d \n",Count);
    
    close(fd);

    return 0;
}
