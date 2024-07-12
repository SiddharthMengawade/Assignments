#include<stdio.h>
#include<stdbool.h>

bool StrCpyX(char *src, char *dest)
{
    bool bflag = false;
    while(*src != '\0' && *dest != '\0')
    {
        if(*src != *dest)
        {
            bflag = false;
            break;
        }

        src++;
        dest++;
    }
    if(*src=='\0' && *dest == '\0')
    {
         bflag =  true;
       
    }
    return bflag;
   
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter the first string :\n");
    gets(Arr);

    printf("Enter the second string :\n");
    gets(Brr);

    bRet = StrCpyX(Arr, Brr);

    if(bRet == true)
    {
        printf("Strings are identical");
    }
    else
    {
        printf("Strings are not identical");
    }

    return 0;
}