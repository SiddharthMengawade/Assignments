#include<stdio.h>
#include<stdbool.h>

int LastOccurence(char *str, char ch)
{
    int iCnt = 0, ipos = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
          ipos = iCnt;
        }
        iCnt++;
        str++;
    }
     if(ipos == -1)
     {
        return -1;
     }
     else
     {
        return ipos;
     }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the character :\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character that you want :\n");
    scanf(" %c", &cValue);

    iRet = LastOccurence(arr, cValue);
   
    if(iRet == -1)
    {
        printf("There is no character");
    }
    else
    {
        printf("Character position is %d", iRet);
    }


    return 0;
}