#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChlCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue;
    bool bRet = false;

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    bRet = ChlCapital(cValue);

    if(bRet == true)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not capital character");
    }

    return 0;
}