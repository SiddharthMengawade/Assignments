#include<stdio.h>
#include<stdbool.h>

bool  StrPallindrome(char *str)
{
    bool bflag = false;
    char *Start = str;
    char *end = str;

    while(*end!='\0')
    {
        end++;   
    }
    end--;

    while(Start<=end)
    {
        if((*Start == *end) || (*Start == *end - 32) || (*Start == *end + 32))
        {
               bflag = true;
        }
        
         else  if((*Start != *end) || (*Start != *end - 32) || (*Start != *end + 32))

        {
            bflag = false;
            break;
        }

        Start++;
        end--;
    }

    return  bflag;
}


int main()
{
    bool bRet = false;
    char Arr[30];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr);

    bRet = StrPallindrome(Arr);

    if(bRet == true)
    {
        printf("String is Pallindrome");
    }
    else
    {
        printf("String is not Pallindrome");
    }

    return 0;
}


