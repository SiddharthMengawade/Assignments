#include<stdio.h>

int Mult(int iNo)
{
    static int iDigits = 0;
    static int iMult = 1;

    if(iNo !=0)
    {
        iDigits = iNo % 10;
        if(iDigits != 0)
        {
            iMult = iMult * iDigits;
        }

        iNo = iNo / 10;

        Mult(iNo);
    }
    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("Product of Digits are :%d\n", iRet);

    return 0;
}