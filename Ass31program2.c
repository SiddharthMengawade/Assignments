#include<stdio.h>
#include<stdbool.h>


int WordCount(char *str)
{
    bool bFlag = false;
    int iMax = 0;
 

    if(str == NULL)
    {
        return -1;
    }

   // while(*str != '\0')
    //{
        if(*str == ' ')
        {
            while(*str == ' ' && *str != '\0')
            {
                str++;
            }

        }
        else
        {
            if(*str !=' ')
            {
                while(*str != ' ' && *str != '\0')
                {
                    iCnt++;
                    str++;

                }

                if(iCnt > iMax)
                {
                    iMax = iCnt;

                }
                iCnt  = 0;

            }

        }
        
        
   // }
    return iMax;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = WordCount(Arr);

    printf("Largest word length is :%d", iRet);


    return 0;
}