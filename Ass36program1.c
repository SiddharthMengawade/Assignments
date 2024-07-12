#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
            str++;
        }
        else

        {
            str++;
        }

        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = WhiteSpace(Arr);

    printf("Total white spaces are :%d\n", iRet);



    return 0;
}