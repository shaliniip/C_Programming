#include<stdio.h>
#include<stdlib.h>

float average(int ino1,int ino2)
{
   float fans=0.0f;
   fans=(ino1+ ino2)/2;
   return fans;

}

int main()
{
    int ivalue1 = 0, ivalue2 = 0 ;
    float fresult = 0.0f;

    printf("enter first no. : \n");
    scanf("%d",&ivalue1);

    printf("enter second no. : \n");
    scanf("%d",&ivalue2);

    fresult= average(ivalue1,ivalue2);
    printf("average no. is :%f\n",fresult);

    return EXIT_SUCCESS;

}
