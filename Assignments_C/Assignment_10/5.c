#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dSqMeter=0.0;
    dSqMeter=iValue*0.0929;
    return dSqMeter;
}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("enter area in square feet : ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("Area in square meters is : %f\n",dRet);

    return EXIT_SUCCESS;
}