#include<stdio.h>

void Pattern(int iRow, int iCoulmn)
{
    int i = 0;
    int j = 0;

    for(i = 1; i<=iRow; i++)
    {
        int iNo = 1;
        for(j = 1; j<=iCoulmn; j++)
        {
            if(i==1||i==iRow || j==1||j==iCoulmn || i==j)
            {
                printf("%d\t", iNo);
            }
            else
            {
                printf("\t");
            }
            iNo++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and coulmn:\n");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}