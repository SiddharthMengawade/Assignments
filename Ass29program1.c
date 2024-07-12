#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int iCnt = 0;

    while(*src != '\0')
    {
        src++;
        iCnt++;
    }
    src--;

    while(iCnt!= 0)
    {
        *dest = *src;

        dest++;
        src--;
        iCnt--;
    }
   
    *dest = '\0';

}


int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    StrCpyRev(Arr, Brr);

    printf("%s", Brr);

    return 0;
}