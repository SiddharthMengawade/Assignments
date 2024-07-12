#include<stdio.h>

void StrRevTog(char *str)
{
    char Temp;
    char *Start1 = str;
    char *Start2 = str;

    Start1 = str;
    Start2 = str;

while(*Start1 != '\0')
{
    if(*Start1 >= 'A' && *Start1 <= 'Z')
    {
        *Start1 = *Start1 + 32;
    }
    else if(*Start1 >= 'a' && *Start1 <= 'z')
    {
        *Start1 = *Start1 - 32;
    }

    Start1++;
}
Start1--;


while(Start2<=Start1)
{
    Temp = *Start2;
    *Start2 = *Start1;
    *Start1 = Temp;

    Start2++;
    Start1--;
}


}



int main()
{
    char Arr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s" , Arr);

    StrRevTog(Arr);

    printf("Destinated string is :%s\n", Arr);


    return 0;
}