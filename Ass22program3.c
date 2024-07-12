#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int i = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iDiff = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        else if(Arr[i] < iMin)
        {
            iMin  = Arr[i];
        }
    }
    iDiff = iMax - iMin;
    return iDiff;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Entered number of elements :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Difference(Brr, iCount);

    printf("Difference is :%d\n", iRet);

    free(Brr);
    return 0;
}