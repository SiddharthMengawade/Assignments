#include<stdio.h>

double FhtoCs(int iTemp)
{
    double dCelsius = 0.0;

    dCelsius = (iTemp -  32) * 5/9;

    return dCelsius;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenhit :\n");
    scanf("%d", &iValue);

    dRet = FhtoCs(iValue);

    printf("Fahrenhit convert it into celsius %lf",dRet);


    return 0;
}