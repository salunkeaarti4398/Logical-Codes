#include<stdio.h>
int Summation()
{
  int iAns = 0;
  int iNo = 0;
  for(iNo = 1; iNo<=5;iNo++)
  {
     iAns = iAns + iNo;
  }

  return iAns;
}

int main()
{
   int iRet = 0;

   iRet = Summation();

   printf("Summation is : %d\n",iRet);

   return 0;
}