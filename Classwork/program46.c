#include<stdio.h>
#include<stdlib.h>

float average(int ino1,int ino2,int ino3)
{
   float fans=0.0f;
   fans=((float)ino1+ (float)ino2+ (float)ino3)/3; //typecasting
   return fans;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0 ;
    float fresult = 0.0f;

    printf("enter first no. : \n");
    scanf("%d",&ivalue1);

    printf("enter second no. : \n");
    scanf("%d",&ivalue2);

    printf("enter third no. : \n");
    scanf("%d",&ivalue3);

    fresult= average(ivalue1,ivalue2,ivalue3);
    printf("average no. is :%f\n",fresult);

    return EXIT_SUCCESS;

}
