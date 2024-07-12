#include<stdio.h>

int Sum(int iNo)
{
    int iDigits = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigits = iNo % 10;
        iSum = iSum + iDigits;

        iNo = iNo / 10;

        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("Total sum of Digits are : %d\n", iRet);

    return 0;
}