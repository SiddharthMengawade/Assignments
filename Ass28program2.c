#include<stdio.h>

void StrNCpy(char *src, char *dest, int iCnt)
{

    while(*src != '\0' && iCnt!=0)
    {
        *dest = *src;

        dest++;
        src++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    int iValue = 0;
    char Arr[30];
    char Brr[30];
  

    printf("Enter the first string :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the index number to print string :\n");
    scanf("%d", &iValue);

    StrNCpy(Arr, Brr,iValue);

    printf("%s", Brr);


    return 0;
}