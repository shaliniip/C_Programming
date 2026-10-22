#include<stdio.h>
#include<stdlib.h>

int maximum(int ino1,int ino2)
{
   if(ino1>ino2)
    {
        return ino1;
    }
    else
    {
        return ino2;
    } 
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0 ,iresult = 0;

    printf("enter first no. : \n");
    scanf("%d",&ivalue1);

    printf("enter second no. : \n");
    scanf("%d",&ivalue2);

    iresult= maximum(ivalue1,ivalue2);
    printf("maximum no. is :%d\n",iresult);

    return EXIT_SUCCESS;

}