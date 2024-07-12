#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }


    return 0;
}