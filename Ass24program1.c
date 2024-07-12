#include<stdio.h>


void DisplayASCII()
{
    
    char ch = '\0';
    printf("Character Integer Hexadecimal Octal \n");

    for(ch = 0; ch<=255; ch++)
    {
       printf(" %c %d %x %o\n", ch,ch,ch,ch);   
    }
}

int main()
{
    DisplayASCII();

    return 0;
}