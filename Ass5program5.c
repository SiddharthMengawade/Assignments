#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int mult = 0;

    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        mult = iNo * iCnt;
        
    printf("%d\t",mult);

    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}