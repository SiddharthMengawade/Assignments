#include<stdio.h>

void StrCap(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while(*str == ' ' && *str != '\0')
            {
                str++;
            }
        }


        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
           // printf("Destinated string is :%s\n",str);
        }
        str++;

        // while(*str != ' ')
        // {
        //     str++;
        // }
       
        if(*str != ' ')
       {
          if((*str != ' ') && (*str != '\0'))
          {
               while(*str != ' ')
               {
                  str++;
               }
          }
       }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    StrCap(Arr);

    printf("Destinated string is :%s\n",Arr);


    return 0;
}