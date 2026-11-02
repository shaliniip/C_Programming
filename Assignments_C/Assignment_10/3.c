#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter=0;
    iMeter=iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue=0,iRet=0;

    printf("enter distance : ");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("distance in meters is : %d\n",iRet);

    return EXIT_SUCCESS;
}