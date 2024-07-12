#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int i = 0;

    printf("Elements which are multiples of 11 are :\n");
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] % 11 ==0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iCount = 0, i = 0;
    int *Brr  = NULL;

    printf("Enter number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to locate memory");
        return -1;
    }

    printf("Entered elements are :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Display(Brr, iCount);

    free(Brr);

    return 0;
}