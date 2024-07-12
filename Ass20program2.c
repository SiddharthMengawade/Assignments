#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[], int iSize)
{
    int i = 0;
    int Even = 0;
    int Odd = 0;
    int iDiff = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }

    iDiff = Even - Odd;
    if(iDiff<=0)
    {
        iDiff = -iDiff;
    }

    return iDiff;

}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements:\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = FrequencyDiff(Brr, iCount);

    printf("Frequency diff is :%d\n", iRet);

    free(Brr);
    
    return 0;
}