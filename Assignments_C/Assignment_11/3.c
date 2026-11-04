#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    if ((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        return -1; 
    }

    int iSum = 0;
    for (int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1=0,iValue2=0,iret=0;

    printf("enter starting point : ");
    scanf("%d",&iValue1);

    printf("enter starting point : ");
    scanf("%d",&iValue2);

    iret=RangeSum(iValue1,iValue2); 

    printf("addition is : %d\n",iret);

    return EXIT_SUCCESS;
}