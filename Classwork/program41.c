#include<stdio.h>
#include<stdlib.h>

void maximum(int ino1,int ino2)
{
   if(ino1>ino2)
    {
        printf("maximum no.: %d\n",ino1);
    }
    else
    {
        printf("maximum no.: %d\n",ino2);
    } 
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0 ,iresult = 0;

    printf("enter first no. : \n");
    scanf("%d",&ivalue1);

    printf("enter second no. : \n");
    scanf("%d",&ivalue2);

    maximum(ivalue1,ivalue2);

    return EXIT_SUCCESS;

}