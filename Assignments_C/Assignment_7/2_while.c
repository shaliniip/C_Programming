#include<stdio.h>
#include<stdlib.h>

void display(int ino)
{
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }

    icnt=1;
   while(icnt<=ino)
    {
        printf("%d\t",icnt);
        icnt++;
    }
}

int main()
{
    int ivalue=0;

    printf("enter value : ");
    scanf("%d",&ivalue);

    display(ivalue);
    return EXIT_SUCCESS;
}