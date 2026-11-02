#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int ivalue=0,iret=0;

    printf("enter number of USD: \n");
    scanf("%d",&ivalue);

    iret=DollarToINR(ivalue);

    printf("value in inr is %d",iret);
    
    return EXIT_SUCCESS;
}