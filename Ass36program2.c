#include<stdio.h>

int Max(int iNo)
{
    static int iDigits = 0;
    static int iMax = 0;


    if(iNo != 0)
    {
        iDigits = iNo % 10;

        if(iDigits > iMax)
        {
            iMax = iDigits;
        }

        iNo = iNo / 10;

        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Max(iValue);

    printf("Maximum digits is :%d\n",iRet);

    return 0;
}