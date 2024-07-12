#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int i = 0;
    int iIndex = 0;
    int iCount = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == iNo)
        {
           iIndex = i;
           iCount++;
              
        }   
    }
     if(iCount == 0)
     {
        return -1;
     }
     else
     {
        return iIndex;
     }
     
}

int main()
{
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    int *Brr = NULL;

    printf("Enter elements that you want :\n");
    scanf("%d",&iCount);

    printf("Enter the value to check last occurence:\n");
    scanf("%d", &iValue);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered the elements :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = LastOcc(Brr, iCount, iValue);


    if(iRet == -1)    
    {
        printf("There is no such number");
    }
    else
    {
         printf("Last occurence number is :%d\n", iRet);
    }

    free(Brr);

    return 0;
}