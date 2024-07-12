#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iSize, int iNo)
{
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i]  == iNo)
        {
            return TRUE;
        }
       
    }
      return FALSE;
    
}

int main()
{
    int iCount = 0, i = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = FALSE;

    printf("Enter the number of elements that you want :\n");
    scanf("%d", &iCount);

    printf("Enter the value to check in array :\n");
    scanf("%d", &iValue);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    bRet = Check(Brr, iCount, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present ");
    }
    else
    {
        printf("Number is not present");
    }

    free(Brr);

    return 0;
}