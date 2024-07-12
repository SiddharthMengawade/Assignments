#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src!='\0')
    {
        src++;
    }
    *src = ' ';
    src++;
   
    while(*dest != '\0') 
    {
        *src = *dest;
        src++;
        dest++;

    }
    *src = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the first string :\n");
    gets(Arr);

    printf("Enter the second string :\n");
    gets(Brr);

    StrCatX(Arr, Brr);

    printf("%s",Arr);
}