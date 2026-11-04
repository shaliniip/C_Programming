#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int ino)
{
    if(ino>100)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number : ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet)
    {
        printf("Greater \n");
    }
    else
    {
        printf("Smaller \n");
    }

    return 0;
}