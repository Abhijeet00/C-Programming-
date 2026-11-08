#include <stdio.h>

int main (){
 int a=3;
 switch(a){
           case 2:
           printf("Value is 2");
           break;
           case 3:
           printf("Value is 3");
           break;
           default:
           printf("Nothing matched");
 }

 return 0;
    
}
/*

you can't keep float a; then switch (a) , it only works with integers 

*/