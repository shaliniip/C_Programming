#include<stdio.h>
#include<stdlib.h>

void checkeven(int ino)
{

    if((ino % 2) == 0)
    {
        printf("it is even no. ... ");
    }
    else
    {
        printf("it is odd no. ....");
    }

}

int main()
{
    int ivalue=0;

    printf("enter no.: \n");
    scanf("%d",&ivalue);

    checkeven(ivalue);

    return EXIT_SUCCESS;
}