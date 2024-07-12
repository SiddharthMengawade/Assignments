#include<stdio.h>

int Reverse(int iNo)
{
    static int iDigits = 0;
    static int Rev = 0;

    if(iNo != 0)
    {
        iDigits = iNo % 10;
        Rev = (Rev * 10) + iDigits;

        iNo = iNo / 10;

        Reverse(iNo);
    }

    return Rev;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reverse number is :%d\n", iRet);

    return 0;
}