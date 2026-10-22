#include"header.h"

////////////////////
//
// entry point of the appliction
//
/////////////////// entry file
    int main()
    {
        int ivalue1=0,ivalue2=0,iresult=0;

        printf("enter first no.\n");        
        if(scanf("%d",&ivalue1)!=1)
        {
            fprintf(stderr,"unable to proceed as input is invalid.. \n");
            return EXIT_FAILURE;
        }
        printf("enter second no.\n");
        if(scanf("%d",&ivalue2)!=1)
        {
            fprintf(stderr,"unable to proceed as input is invalid.. \n");
            return EXIT_FAILURE;
        }
        
        iresult=addition(ivalue1,ivalue2);
         

        printf("addition is : %d\n",iresult);
        return EXIT_SUCCESS;
    }
