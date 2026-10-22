#include<stdio.h>
#include<stdlib.h>

int minimum(int ino1,int ino2,int ino3,int ino4)
{
   if((ino1<ino2)&&(ino1<ino3)&&(ino1<ino4))
   {
    return ino1;
   }
   else if((ino2<ino1)&&(ino2<ino3)&&(ino2<ino4))
   {
    return ino2;
   }
   else if((ino3<ino1)&&(ino3<ino2)&&(ino3<ino4))
   {
    return ino3;
   }
   else
   {
    return ino4;
   }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0 ,ivalue4=0;
    int iresult = 0;

    printf("enter first no. : \n");
    scanf("%d",&ivalue1);

    printf("enter second no. : \n");
    scanf("%d",&ivalue2);

    printf("enter third no. : \n");
    scanf("%d",&ivalue3);

    printf("enter fourth no. : \n");
    scanf("%d",&ivalue4);

    iresult= minimum(ivalue1,ivalue2,ivalue3,ivalue4);
    printf("minimum no. is :%d\n",iresult);

    return EXIT_SUCCESS;

}
