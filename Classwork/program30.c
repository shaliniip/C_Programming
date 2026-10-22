#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sname[30];
    int iage = 0;
    float fmarks = 0.0f;

    printf("enter your name: \n");
    scanf("%[^'\n']s",sname); // enter remains in input buffer

    printf("enter your age: \n");
    scanf("%d",&iage);

    printf("enter your marks: \n");
    scanf("%f",&fmarks);

    printf("welcome %s\n",sname);
    printf("your age is : \n",iage);
    printf("your marks is : \n",fmarks);

    return EXIT_SUCCESS;
}
