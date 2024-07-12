#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int mult = 1;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit ==0)
        {
           iDigit = 1;
           mult = mult * iDigit;
        }
        else
        {
        mult = mult * iDigit;
        }
        iNo = iNo / 10;
    }
    return mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d",iRet);

    return 0;
}