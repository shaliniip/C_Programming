/*   
          operation ||
-----------------------------
result1  result2  finalresult
-----------------------------
true     true       true     short circuit
true     false      true     short circuit
false    true       true
false    false      false
-----------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void checkdivisible(int ino)
{
    //logic 
    if(((ino%5)==0)||((ino%3)==0))
    {
        printf("%d is divisible..\n");
    }
   else if((ino%5)==0)
    {
        printf("%d is not divisible..\n");
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