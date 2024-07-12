#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int count = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit>=3 && iDigit<=7)
        {
            count++;
        }
        iNo = iNo / 10;
    }
    return count;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}