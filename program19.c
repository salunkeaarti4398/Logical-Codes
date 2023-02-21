#include<stdio.h>

void Display(int iValue)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iValue; iCnt++ )
   {
      printf("Jay Ganesh..\n");
   }


}
int main()
{
   int iNo = 0;
   printf("Enter the number for you want to print\n ");
   scanf("%d",&iNo);

   Display(iNo);

   return 0;
}