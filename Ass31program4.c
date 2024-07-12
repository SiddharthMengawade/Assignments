#include<stdio.h>

void StrCpy(char *src, char *dest)
{
    while(*src!= '\0')
    {
       if(*src == ' ')
       {
          while(*src == ' ' && *src !='\0')
          {
            src++;
          }
          
       }

        else if(*src != ' ')
       {
            while(*src != ' ' && *src !='\0')
            {
                *dest = *src;
                src++;
                dest++;
            }
       } 
       //src--;   
    
        *dest =' ';
        dest++;
        if((*src== '\0') && (*(dest-1)== ' '))
        {
            *(dest - 1) = '\0';
        }
   }
} 



int main()
{
    char Arr[30]; 
    char Brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    StrCpy(Arr, Brr);

    printf("Destinated string is:%s", Brr);

    return 0;
}