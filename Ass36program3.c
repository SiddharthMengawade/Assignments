#include<stdio.h>

int Small(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
            
        }
        str++;

        Small(str);

    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = Small(Arr);

    printf("Total small character are :%d\n", iRet);

    return 0;
}