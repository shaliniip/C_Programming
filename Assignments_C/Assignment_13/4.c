#include <stdio.h>
#include <stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0,iMult = 1,iFlag = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    if (iNo == 0)
    {
        return 0;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
            iFlag = 1;
        }
        iNo = iNo / 10;
    }

    if (iFlag == 0)
    {
        return 0;
    }
    return iMult;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}