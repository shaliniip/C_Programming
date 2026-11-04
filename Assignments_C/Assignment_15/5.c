#include<stdio.h>

float Percentage(int ino1, int ino2)
{
    float ans=0;

    ans=((float)ino2/ino1)*(100);

    return ans;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%f %\n",fRet);

    return 0;
}