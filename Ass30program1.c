#include<stdio.h>

int WordCount(char *str)
{
    int iCnt = 0;

    while(*str !='\0')
    {
        if(*str == ' ')
        {
            while(*str == ' ' && *str != '\0')
            {
                str++;
            }
        }
        else if(*str != ' ')
        {
            while(*str != ' ' && *str !='\0')
            {
                str++;
            }
            iCnt++;
        }
        

        
    }
    return iCnt;

}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s" ,Arr);

    iRet = WordCount(Arr);

    printf("Total word count is %d\n", iRet);

    return 0;
}