#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str !='\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }

        str++;
    }

    return bFlag;

}

int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character that you want :\n");
    scanf(" %c", &cValue);


    bRet = ChkChar(arr, cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}