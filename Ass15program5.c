#include<stdio.h>

void Pattern(int iRow, int iCoulmn)
{
    int i = 0;
    int j = 0;

    for(i = 1; i<=iRow; i++)
    {
       int iNo = i;
        
        for(j = 1; j<=iCoulmn; j++)
        {
            printf("%d\t", iNo);
            iNo++;
        }
        

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of row and coulmn :\n");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}