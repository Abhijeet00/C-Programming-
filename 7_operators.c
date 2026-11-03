/*Operators - symbols used in c programming to perform operations on variable and values.
Types of operator in c language are:

Arithmetic operators : + , - , * , / , % (modulus , gives remainder 8%3=2), ++ , --





Relational operators : == , != , > , < , >= , <=

Logical operators : && , || , !

Bitwise operators : & , | , ^ , ~ , << , >>

Assignment Operators : = , += , -= , *= , /= , %= , <<= , >>= , &= , ^= , |=

*/

#include <stdio.h>

int main()
{
      int a,b;
      a=34;
      b=6;

      printf("a+b=%d\n", a+b); /*addition operator*/
      printf("a-b=%d\n", a-b); /*subtraction operator*/
      printf("a*b=%d\n", a*b); /*multiplication operator*/
      printf("a/b=%d\n", a/b); /*division operator*/
      printf("a%%b=%d\n", a%b); /*modulus operator*/

      int c;
      int d;
      c=24;
      d=5;
      printf(" c / d= %d\n", c/d); // this only gives quotient (4) because %d can not return a decimal 

      int e;
      int f;
      e=24;
      f=5;
      printf(" e / f= %f\n", (float)e/f); // this gives decimal value (4.800000) because we type casted e to float




      return 0;
    
}

