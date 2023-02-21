//////////////////////////////////////////////////////////////////////////////////////////////////

// Problem statement :  Accept number from user and check whether it is divisible by 5 or not

////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
//  Algorithm
///////////////////////////////////////////////////////////

/*
  START
     Accept number from user as NO
     Divide that NO by 5 check the value of remainder
     If the value is 0
         then display as NO is divisible by 5
     Otherwise
          display as NO is not divisible by 5
  END
*/

//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////
//
// Function name : DivisibleByFive
// Description : To check whether input is divisible by 5 or not
// Input :  Integer
// Output : Integer
// Author : Aarti Sunil Salunke
// Date :  12/10/2022
//
////////////////////////////////////////////////////////

int DivisibleByFive(int iNo)
{
   int iAns = 0;
   iAns = iNo % 5;

   if(iAns == 0)
   {
        return 1;
   }
   else
   {
        return 0;
   }
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  iRet = DivisibleByFive(iValue);
  if(iRet == 1)
  {
        printf("%d is Divisible by 5 \n",iValue);
  }
  else
  {
        printf("%d is  not Divisible by 5 \n",iValue);
  }


  return 0;
}

