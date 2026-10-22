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


    ////////////////
    // function name: addition
    // input:         integer,integer
    // output:        integer
    // description:   performs addition
    // date:          04/10/2026
    // author:        Shalini Mahendra Pawar
    //
    //
    /////////////////////
    int addition(int ino1 ,int ino2)
    {
        int ians=0;
        ians=ino1+ino2; //business logic
        return ians;
    }
////////////////////
//
// entry point of the appliction
//
///////////////////
    int main()
    {
        int ivalue1=0,ivalue2=0,iresult=0;

        printf("enter first no.\n");        
        scanf("%d",&ivalue1);
        printf("enter second no.\n");
        scanf("%d",&ivalue2);
        
        iresult=addition(ivalue1,ivalue2);
         

        printf("addition is : %d\n",iresult);
        return 0;
    }
////////////////
// step 5:test the code
//tested test cases
//input1    input2  output
//11        10      11
//0         11      11
//11        0       11
//20       -9       11
//-9        20      11