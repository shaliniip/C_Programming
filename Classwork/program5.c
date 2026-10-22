/* step 1:understand the problem statement
    step 2: write the algorithm
    step 3:decide the programming lang 
    step 4: write the code
    step 5: test the code */


    /////////////////////////////////
    //step 1:understand the problem statement
    //user is going to enter any 2 no.statement

    //
    /////////////////////////////////
    //step 2:write the algo
    /*Start 
        accept the 1st no as no1
        accept the 2nd no as no2
        create the avriable as ans to store the result
        perform the addition and store into ans 
        display the result from ans 
    End
    */
    //
    ///////////////
    // step 3:decide the programming lang 
    // we select c programming
    //////////////

    //step 4: write the code
    //
    /////////////

    #include<stdio.h>

    int main()
    {
        int ivalue1=0,ivalue2=0,iresult=0;

        printf("enter first no.\n");        
        scanf("%d",&ivalue1);
        printf("enter second no.\n");
        scanf("%d",&ivalue2);
        

        iresult=ivalue1+ivalue2; //business logic

        printf("addition is : %d\n",iresult);
        return 0;
    }
