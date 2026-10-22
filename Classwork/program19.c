#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool checkeven(int ino)
{

    if((ino % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int ivalue=0;

    printf("enter no.: \n");
    scanf("%d",&ivalue);

    bool bret = false; 

    bret=checkeven(ivalue);

    if(bret==true)
    {
        printf("it is even..");
    }
    else{
        printf("it is odd.....");
    }
    return EXIT_SUCCESS;
}