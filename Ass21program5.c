#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int i = 0;
    int iMult = 1;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] % 2 !=0)
        {
           iMult =  iMult * Arr[i];
        }
    }
    return iMult;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want:\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered elements are :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Product(Brr, iCount);

    printf("Product of odd numbers is :%d\n", iRet);

    free(Brr);
    return 0;
}