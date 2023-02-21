#include<stdio.h>
void Display(int iValue)
{
  int iCnt = 0;
  for(iCnt = 1;iCnt<=iValue;iCnt++)
  {

    printf("Marvellous : %d \t",iCnt);

  }
}
int main()
{
  int iNo = 0;

  printf("enter the no. you want to print\n");
  scanf("%d",&iNo);
  Display(iNo);

  return 0;
}