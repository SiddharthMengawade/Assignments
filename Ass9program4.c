#include<stdio.h>

void RangeSumEven(int iStart ,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    else if(iStart<0)
    {
        printf("Invalid Range");
    }
    else
    {
       for(iCnt = iStart; iCnt<=iEnd; iCnt++)
       {
         if(iCnt % 2 ==0)
         {
            iSum = iSum + iCnt;
         }
       }

       printf("Addition of even number is %d",iSum);

    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting number :\n");
    scanf("%d", &iValue1);

    printf("Enter ending point :\n");
    scanf("%d", &iValue2);

    RangeSumEven(iValue1,iValue2);

    return 0;
}