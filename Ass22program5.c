#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int i = 0;
    int iDigit = 0;
    int iSum = 0;
    
    printf("Summation of digits of each number is :\n");
    for(i = 0; i<iSize;i++)
    {
        while(Arr[i] !=0)
        {
           iDigit = Arr[i] % 10;

           iSum = iSum + iDigit;
          
           Arr[i] = Arr[i] / 10;
        }

         printf("%d\n", iSum);
         iSum = 0;
    }
           
}

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered elements are:\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    DigitsSum(Brr, iCount);

    free(Brr);
    return 0;
}