#include<stdio.h>

void Pattern(int iRow, int iCoulmn)
{
    int i = 0;
    int j = 0;

    if(iRow<=0 && iCoulmn<=0)
    {
        iRow = -iRow;
        iCoulmn = -iCoulmn;
    }

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCoulmn; j++)
        {
            printf("*\t");
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d", &iValue1);

    printf("Enter number of coulmn :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}