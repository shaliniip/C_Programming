#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int icnt=0;

   for(icnt=(-ino);icnt<=ino;icnt++)
    {
        printf("%d\t",icnt);
    }
}

int main()
{
    int ivalue=0;

    printf("enter value : ");
    scanf("%d",&ivalue);

    pattern(ivalue);
    return EXIT_SUCCESS;
}