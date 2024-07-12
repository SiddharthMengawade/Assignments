#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char *str)
{
     bool bflag = false;
    while(*str!='\0')
    {
       
        if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
        {
            bflag = true;
            break;
        }
      
        str++;
    }
   return bflag;
}

int main()
{
    char arr[20];
    bool bRet = false;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("there is no vowel");
    }


    return 0;
}