#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue=0;

    printf("enter no.: \n");
    scanf("%d",&ivalue);

    if((ivalue % 2) == 0)
    {
        printf("it is even no. ... ");
    }
    else
    {
        printf("it is odd no. ....");
    }

    return EXIT_SUCCESS;
}