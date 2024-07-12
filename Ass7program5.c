#include<stdio.h>

int FactorialDiff(int iNo)
{
     int iCnt = 0;
     int evenfact = 1;
     int oddfact = 1;
     int factdiff = 0;

     if(iNo<=0)
     {
        iNo = -iNo;
     }

     for(iCnt = 1; iCnt<=iNo; iCnt++)
     {
        if(iCnt % 2 ==0) 
        {
           evenfact = evenfact * iCnt;
           
        }
        if(iCnt % 2 != 0)
        {
           oddfact = oddfact * iCnt;
          
        }
     }
     
     factdiff = evenfact - oddfact;

     return factdiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d" ,iRet);

    return 0;
}