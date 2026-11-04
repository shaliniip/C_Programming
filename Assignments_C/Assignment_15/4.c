#include<stdio.h>

int Multiply(int no1,int no2,int no3)
{
    int ians=0;

    ians=no1*no2*no3;

    return ians;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d\n",iRet);

    return 0;
}