#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        for(ch = ch; ch<='Z'; ch++)
        {
            printf("%c\t", ch);     
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(ch = ch; ch>='a'; ch--)
        {
            printf("%c\t", ch);    
        }
     
    }
    else
    {
        printf("%c",ch);
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