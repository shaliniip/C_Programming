#include<stdio.h>
#include<stdlib.h>

void checkdivisible(int ino)
{
    //logic  nested if usage
    if(((ino%3)==0))
    {
        printf("is divisible by 3..\n");
    }
   else if((ino%5)==0)
    {
        printf("is not divisible by 5..\n");
    }
    else
    {
        printf("is not divisible by both..\n");
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