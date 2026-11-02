#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int ivalue=0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    Display(ivalue);
    
    return EXIT_SUCCESS;
}