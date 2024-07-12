#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt =0;
    int mult = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        mult = 2 * iCnt;
        printf("%d\t",mult);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}