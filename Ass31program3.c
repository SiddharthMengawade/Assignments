#include<stdio.h>

void StrWrdRev(char *str)
{
    char Temp;
    char *Start = str;
    char *end = str;
    char *end1 = str;
 
    while(*end1 != '\0')
    {
      if(*end1 == ' ')
      {
           while(*end1 == ' ' && *end1 != '\0')
           {
              
              end1++;
              end++;
              Start++;
           }

      } 
   
      else if(*end1!= ' ' )
        {
            while(*end1 != ' ' && *end1 != '\0' )
            {
                end++;
                end1++;
            }
            end--;
            

            while(Start<end)
            {
                Temp = *Start;
                *Start = *end;
                *end = Temp;

                Start++;
                end--; 


            }
            
        Start = end1;
        end = end1;
        end1++; 
        end++;
        Start++;

        
        }
    }    
}  
      


int main()
{

    char Arr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    StrWrdRev(Arr);

    printf("Destinated string is  : %s", Arr);

    return 0;
}