#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (int iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1=0,iValue2=0,iret=0;

    printf("enter starting point : ");
    scanf("%d",&iValue1);

    printf("enter starting point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2); 

    return EXIT_SUCCESS;
}