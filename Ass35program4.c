#include<stdio.h>

int Fact(int iNo)
{
    static int iMult = 1;
    static int iDigits = 1;

    if(iDigits <=iNo)
    {
        iMult = iDigits * iMult;
        iDigits++;

        Fact(iNo);
    
    }
    return iMult;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}