#include<stdio.h>

int DollarToINR(int iNo)
{
    int inr = 1;

    inr = iNo * 70;
  
     return inr;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD :\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in IND is %d",iRet);

    return 0;
}