#include<stdio.h>
#include<stdlib.h>

int Frequency(int  Arr[], int iSize, int iNo)
{
    int i = 0;
    int ifrequency = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            ifrequency++;
        }
    }
    return ifrequency;
}

int main()
{
    int iCount = 0, i= 0, iRet = 0, iValue = 0;
    int *Brr = NULL;

    printf("Enter the elements that you want :\n");
    scanf("%d", &iCount);

    printf("Enter the value for checking frequency in Array :\n");
    scanf("%d", &iValue);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Frequency(Brr, iCount, iValue);

    printf("frequency of value is :%d\n", iRet);

    free(Brr);
    return 0;
}