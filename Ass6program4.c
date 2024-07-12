#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int table = 1;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        table = iNo * iCnt;
        printf("%d\t",table);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}