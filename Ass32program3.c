#include<stdio.h>

void Pattern(char *str)
{
    int i = 0, j = 0, iCnt = 0;
    char *src = str, *dest = str;

    while(*src != '\0')
    {
        iCnt++;
        src++;
    }

    int iCount = 1;
    for(i = 1; i<=iCnt; i++)
    {
        char *dest = str;
        for(j = 1; j<=iCount; j++)
        {
            printf("%c\t", *dest);
            dest++;
        }
        iCount++;

        printf("\n");
    }
}

int main()
{
    char Arr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    Pattern(Arr);

    return 0;
}