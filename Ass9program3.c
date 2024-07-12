#include<stdio.h>

void RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    else if(iStart<0 )
    {
        printf("Invalid Range");
        
    }
    else
    {
            
        for(iCnt = iStart; iCnt<=iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        
        }
        printf("Addition is %d",iSum);
    }


   
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d", &iValue2);
    
    RangeSum(iValue1,iValue2);

  

    return 0;
}