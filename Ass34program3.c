#include<stdio.h>

void Display(int iNo)
{
    if(iNo>=1)
    {
        printf("%d\t", iNo);
        iNo--;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}