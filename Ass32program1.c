#include<stdio.h>

void Pattern(char *str)
{
    int iCnt = 0;
    int i = 0;
    int j = 0;
    char *src = str;
    char *dest = str;

    while(*src!='\0')
    {
        iCnt++;
        src++;
    }

 
    for(i = 1; i<=iCnt; i++)
    {
        char *dest = str;
        for(j = 1; j<=iCnt; j++)
        {
            while(*dest != '\0')
            {
                printf("%c\t", *dest);
                dest++;
            }
        }

        printf("\n");
    }
}

int main()
{
    char Arr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    Pattern(Arr);

    return 0;
}