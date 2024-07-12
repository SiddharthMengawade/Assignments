#include<stdio.h>

double SquareMeter(int iValue)
{
    float  fMeter = 0.0929;
    double dMeter = 0.0;

    dMeter = fMeter * iValue;

    return dMeter;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet convert it into square meter %lf",dRet);


    return 0;
}