#include<stdio.h>
void Display(int iValue)
{
  int iCnt = 0;
  iCnt = 1;
  while(iCnt<=iValue)
  {
     printf("Marvellous : %d\n",iCnt);
     iCnt ++;
  }
}
int main()
{
   int iNo1 = 0;

   printf("enter no. of iteration...\n");
   scanf("%d",&iNo1);
   Display(iNo1);
   return 0;
}