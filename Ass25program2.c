#include<stdio.h>

int Countsmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {

    if(*str >= 'a' && *str <= 'z')
     {
        iCnt++;
     }
     str++;

    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", arr);

    iRet = Countsmall(arr);

    printf("Total small letter : %d", iRet);

    return 0;
}