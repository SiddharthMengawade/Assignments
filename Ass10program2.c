#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            break;
        }
       
        iNo = iNo / 10;
      
    }
    if(iDigit ==0)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains zero");
    }
    else{
        printf("There is no zero");
    }

    return 0;
}