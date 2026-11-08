/* 
if else statements ( control statements )

if statement

if else statement 

if - else if ladder

Nested if 


if executes if code if the statement is true , other wise it goes to after if code
if else executes if code if the statement is true , other wise it executes else code then it goes to after if else code.
if else if ladder continues to else statements until the last else . so basically if elseif elseif elseif else

*/

#include <stdio.h>
int main()
{    

    if(3>2) {

       printf("This gets printed\n");

    }

    if(3<2) {

     printf("Second statement gets printed");
    }


    if (3<2) {

        printf("3 is lesser than 2");
    }
    else {

        printf("3 is greater than 2\n");
    }

    if (3<2){

        printf("3<2<1");
    }
    else if (49<39){
       
        printf("3>2<1");

    }
    else {
        printf("3>2>1\n");
    }

    int a;
    printf("Enter your age\n");
    scanf("%d", &a);
    printf("You have entered %d as your age \n", a);
    
    if(a>=18){
        printf("You can apply for a drivers license \n");
    }
    else if (16<=a) {
        printf("You can apply for a learners license right now \n");
    }
    else {
        printf("You can not apply for any license right now \n");
    }








}