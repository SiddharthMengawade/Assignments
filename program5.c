#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkEven(int iNo)
{
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
       return false;
    }
}

int main()
{
   int iValue = 0;
   bool bRet = false;

   printf("Enter number :\n");
   scanf("%d",&iValue);

   bRet = ChkEven(iValue);

   if(bRet == true)
   {
     printf("Number is even");
   }
   else
   {
     printf("Number is odd");
   }

    return 0;
}