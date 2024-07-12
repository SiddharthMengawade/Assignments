#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == 11)
        {
            return TRUE;
        }
       
    }
    return FALSE;
  
}

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    bRet = Check(Brr, iCount);

    if(bRet == TRUE)
    {
        printf("It contains 11");
    }
    else
    {
        printf("It not contains 11 ");
    }

    free(Brr);
    return 0;
}