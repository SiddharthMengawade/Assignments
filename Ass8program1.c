#include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14;
   

    double dArea = 0.0;

    dArea = fPI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius :\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf",dRet); 

    return 0;
}