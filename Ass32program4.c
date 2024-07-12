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

    for(i = 1; i<=iCnt; i++)
    {
        char *dest = str;
        for(j = 1; j<=iCnt; j++)
        {
            if(*dest >='a' && *dest <= 'z')
            {
                *dest = *dest - 32;

                printf("%c\t", *dest);
            }
            else if(*dest >= 'A' && *dest <= 'Z')
            {
                printf("%c\t", *dest);
            }

            dest++;

        }

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