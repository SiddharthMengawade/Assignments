#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int i = 0;
    int EvenSum = 0;
    int OddSum = 0;
    int iDiff = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] % 2 ==0)
        {
             EvenSum =  EvenSum + Arr[i];
        }
        else if(Arr[i] % 2 !=0 )
        {
            OddSum = OddSum + Arr[i];
        }
    }
     iDiff = EvenSum - OddSum;

     return iDiff;
}


int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter elements are :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Difference(Brr, iCount);

    printf("Difference is :%d\n", iRet);

    free(Brr);

    return 0;
}