#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int revtable = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt>=1; iCnt--)
    {
        revtable = iNo * iCnt;
        printf("%d\t",revtable);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}