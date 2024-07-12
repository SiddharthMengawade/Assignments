#include<stdio.h>
#include<stdbool.h>

bool StrNCmp(char *src, char *dest, int iCnt)
{
     bool bflag = false;
    while(*src != '\0' && *dest != '\0' && iCnt!=0)
    {
       
        if(*src!=*dest)
        {
            bflag = false;
            break;
        }
        src++;
        dest++;
        iCnt--;
    }
    if(*src == *dest) 
    {
        bflag = true;
    }

    return bflag;
   
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;
    int iValue = 0;

    printf("Enter the first string :\n");
    gets(Arr);

    printf("Enter the second string :\n");
    gets(Brr);

    printf("Enter the index number :\n");
    scanf("%d", &iValue);

    bRet = StrNCmp(Arr, Brr, iValue);

    if(bRet == true)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }

    return 0;
}