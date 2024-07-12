#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int fact = 1;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        if(iCnt % 2  ==0)
        {
           fact = fact * iCnt;
        }
    }
    return fact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial number is %d", iRet);

    return 0;
}