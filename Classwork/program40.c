#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue1 = 0, ivalue2 = 0 ,iresult = 0;

    printf("enter first no. : \n");
    scanf("%d",&ivalue1);

    printf("enter second no. : \n");
    scanf("%d",&ivalue2);

    if(ivalue1>ivalue2)
    {
        printf("maximum no.: %d\n",ivalue1);
    }
    else
    {
        printf("maximum no.: %d\n",ivalue2);
    }
    return EXIT_SUCCESS;

}