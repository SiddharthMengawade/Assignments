#include<stdio.h>

void Pattern(int iRow, int iCoulmn)
{
    int i = 0;
    int j = 0;

 

    int iNo = 1;
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCoulmn; j++)
        {
            printf("%d\t" ,iNo);
            iNo++;

            if(iNo==10)
            {
                iNo = 1;
            }
             
                  
        }   
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and coulmn :");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);


    return 0;
}