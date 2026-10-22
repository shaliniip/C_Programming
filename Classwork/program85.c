/*   
          operation &&
-----------------------------
result1  result2  finalresult
-----------------------------
true     true       true
true     false      false
false    true       false     short circuit
false    false      false     short circuit
-----------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void checkdivisible(int ino)
{
    //logic 
    if(((ino%5)==0)&&((ino%3)==0))
    {
        printf("it is divisible by both..\n");
    }
   else if((ino%5)==0)
    {
        printf("%d is not divisible by 5 ..\n");
    }

}
int main()
{
    int ivalue=0;

    printf("enter no.:\n");
    scanf("%d",&ivalue);

    checkdivisible(ivalue);

    return EXIT_SUCCESS;
}