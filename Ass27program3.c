#include<stdio.h>
#include<stdbool.h>


int FirstChar(char *str, char ch)
{
     bool bFlag = false;
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }

        iCnt++;
        str++;
    }

    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
    

}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;
   

    printf("Enter the string :\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    if(iRet == -1)
    {
        printf("There is no such letter");
    }
    else
    {
        printf("Character location is %d", iRet);
    }


    return 0;
}