#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int ivalue=0,iret=0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    iret=FactorialDiff(ivalue);

    printf("factorial difference is : %d\n",iret);
    
    return EXIT_SUCCESS;
}