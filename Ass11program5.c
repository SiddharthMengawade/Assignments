#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int evensum = 0;
    int oddsum = 0;
    int iDiff = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 ==0)
        {
            evensum = evensum + iDigit;
        }
        else
        {
           oddsum = oddsum + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = evensum - oddsum;

    return iDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}