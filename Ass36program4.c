#include<stdio.h>

int Min(int iNo)
{
    //int  iVal = iNo;
    static int iDigits = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigits = iNo % 10;

        if(iDigits < iMin)
        {
            iMin = iDigits;
        }

        iNo = iNo / 10;

        Min(iNo);

    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("Smallest digits is :%d\n", iRet);

    return 0;
}