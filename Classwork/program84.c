#include<stdio.h>
#include<stdlib.h>

void checkdivisible(int ino)
{
    //logic 
    if((ino%5)==0)
    {
        printf("%d is divisible by 5..\n",ino);
    }
    else
    {
        printf("%d is not divisible. by 5..\n",ino);
    }
}
int main()
{
    int ivalue=0;

    printf("enter no.:\n");
    scanf("%d",&ivalue);

    checkdivisible(ivalue);

    return EXIT_SUCCESS;
}