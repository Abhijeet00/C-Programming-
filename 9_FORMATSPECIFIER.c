/* 

Tells our function what type of data it is ( integer , float, long , double etc)


 %d : integer
 %c : character
 %f : float
 %l : long
 %lf : double
 %Lf : long double
 





*/
#include <stdio.h>

int main()

{

int a=8;
float b=3.3;
printf("The value of a is %d , The value of b is %f", a, b);
printf("The value of b is %0.3f \n", b);
printf("The value of b is %10.3f \n", b);
printf("The value of b is %-10.3f WHERE THE GAP GOING", b);




}