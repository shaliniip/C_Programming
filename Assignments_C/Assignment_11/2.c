#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("enter starting point : ");
    scanf("%d",&iValue1);

    printf("enter starting point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2); 

    return EXIT_SUCCESS;
}