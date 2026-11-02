#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int ivalue=0,iret=0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    iret=EvenFactorial(ivalue);

    printf("even factorial of number is : %d\n",iret);
    
    return EXIT_SUCCESS;
}