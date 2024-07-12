#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int iCount = 0, i = 0, iValue = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements size :\n");
    scanf("%d", &iCount);

    printf("Enter the value to check occurence :\n");
    scanf("%d", &iValue);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memeory");
        return -1;
    }

    printf("Enter elements are :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = FirstOcc(Brr, iCount, iValue);

   if(iRet == -1)
   {
      printf("There is no such member");
   }
   else
   {
    printf("First occurence of number is :%d\n", iRet);
   }
    
    free(Brr);
    return 0;
}