#include<stdio.h>

int Difference(char *str)
{
    int iCntCap = 0,iCntSmall = 0, iDiff = 0;

     while(*str!=0)
     {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntCap++;
        }
        else
        {
            iCntSmall++;
        }
        str++;
     }
     iDiff = iCntSmall - iCntCap;

     return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference is :%d", iRet);

    return 0;
}