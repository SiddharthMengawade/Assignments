#include<stdio.h>
#include<stdlib.h>

void DisplayRev(int Arr[], int iSize)
{
    int iStart = 0, iEnd = 0;
    int Temp = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart<iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = Temp;


        iStart++;
        iEnd--;
    }
   
}

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter the array size :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the array elements :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    DisplayRev(Brr, iCount);
    printf("Emlements after reverse order :\n");
    for(i = 0; i<iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }


    free(Brr);

    return 0;
}