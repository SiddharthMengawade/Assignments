#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7 AM");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8:30 AM");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9:20 AM");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("your exam at 10:30 AM");
    }
    else
    {
       printf("Division is not valid");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division :\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);


    return 0;
}