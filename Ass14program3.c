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
     char ch = 'A';
    for(i = 1; i<=iRow; i++)
    {  
        for(j = 1; j<=iCoulmn; j++)  
        {
           printf("%c\t", ch);  
        }
        ch++;
       
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Entwer number of rows and coulmn :\n");
    scanf("%d%d", &iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}