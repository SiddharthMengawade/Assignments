#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int i = 0;
    int iDigit = 0;
    int frequency = 0;
    int Temp =  0;

   printf("Number which contain 3 digits :\n");
    for(i = 0; i<iSize; i++)
    {
        Temp = Arr[i];
        while(Temp!= 0)
        {
            iDigit =Temp % 10;
               frequency++;
          // printf("%d\n", iDigit);

           Temp =Temp / 10;
         

        }
 
        if(frequency == 3)
     
        {
            printf("%d\n", Arr[i]);
        }
            frequency = 0;
    }
   

}
   

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter elements that you want :\n");
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
        scanf("%d",&Brr[i]);
    }

    Digits(Brr, iCount);

    free(Brr);
    return 0;
}