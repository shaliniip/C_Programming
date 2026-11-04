#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int no1,int no2)
{
    if(no1==no2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet)
    {
        printf("Equal..\n");
    }
    else
    {
        printf("Not Equal..\n");
    }

    return 0;
}