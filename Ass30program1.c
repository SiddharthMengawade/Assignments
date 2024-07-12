#include<stdio.h>


void StrNCat(char *src, char *dest, int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;
 
    while(*dest != '\0' && iCnt!=0)
    {
        *src = *dest;

        src++;
        dest++;
        iCnt--;
    }
    *src = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];
    int iValue = 0;

    printf("Enter the first string :\n");
    gets(Arr);

    printf("Enter the second string :\n");
    gets(Brr);

    printf("Enter the index number :\n");
    scanf("%d", &iValue);

    StrNCat(Arr, Brr, iValue);

    printf("Destinated string is : %s\n", Arr);

    return 0;
}