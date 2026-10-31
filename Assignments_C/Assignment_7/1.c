#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int icnt=0;

    if(ino!=0)
    {
        ino=-ino;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("$   *   ");
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