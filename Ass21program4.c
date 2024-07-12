#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int i = 0;
    
    printf("Elements between ranges are:\n");
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i]>=iNo1 && Arr[i]<=iNo2)
        {
            printf("%d\n", Arr[i]);
        }
    }
}

int main()
{
    int iCount = 0, i = 0, iValue1 = 0, iValue2 = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want :\n");
    scanf("%d", &iCount);

    printf("Enter starting point of number :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point of number :\n");
    scanf("%d", &iValue2);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("unablr to allocate memory");
        return -1;
    }

    printf("Entered elements are :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Range(Brr, iCount, iValue1, iValue2);

    free(Brr);
    return 0;
}