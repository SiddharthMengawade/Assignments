#include<stdio.h>


void Display(char ch)
{

    if(ch>='A' && ch<='Z')
    {
        ch = ch + 32;
        printf("Corresponding small character is %c\n", ch);
    }
    else if(ch >='a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Corresponding capital character is %c\n", ch);
    }
    else
    {
        printf(" character is %c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    Display(cValue);


    return 0;
}