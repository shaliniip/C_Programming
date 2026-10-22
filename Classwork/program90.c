#include<stdio.h>
#include<stdlib.h>

int summation(int ino)
{
    int icnt=0,isum=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        isum=isum+icnt;
    }
    return isum;
}

int main()
{
    int ivalue=0,iret=0;
    
    printf("enter no.:\n");
    scanf("%d",&ivalue);

    iret=summation(ivalue);

    printf("summation is :%d\n",iret);

    return EXIT_SUCCESS;
}