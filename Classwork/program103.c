#include<stdio.h>
#include<stdlib.h>

int sumfactors(int ino)
{
    int icnt=0,isum=0;

    for(icnt=1;icnt<=ino/2;icnt++)
    {
        if((ino%icnt)==0)
        {
            isum=isum+icnt;
        }
    }
    return isum;
}

int main()
{
    int ivalue=0,iret=0;
    
    printf("enter no.:\n");
    scanf("%d",&ivalue);

    iret=sumfactors(ivalue);

    printf("summation of factors is :%d\n",iret);

    return EXIT_SUCCESS;
}

//time complexity big o:O(N/2)