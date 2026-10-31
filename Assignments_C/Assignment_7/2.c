#include<stdio.h>
#include<stdlib.h>

void display(int ino)
{
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }

   for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\t",icnt);
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