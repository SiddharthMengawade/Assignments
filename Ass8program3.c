#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000;
    int iDist = 0;

    iDist = iMeter * iNo;

    return iDist;
}

int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Kilometer convert into meter is %d", iRet);

    return 0;
}