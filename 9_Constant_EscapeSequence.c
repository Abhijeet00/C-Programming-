#include <stdio.h>

#define PI 3.14 // this is a preprocessor statement 



int main() {


  int a=8;
  a=9;
  //you can change no problem because it is variable.
  const int b=8;
 // b=9 is a problematic statement. since it is a constant , you've already defined it's value 


 printf("%f \n", PI);
 

 //PI=7.33 will be a wrong statement . Preprocessing statements are read the first

 

 printf(" Tab Character \t\t To write a backslash ,you have to type \\ , because of the comment reason \a "); // \ will give a error as a single \ is for escape sequences. , you need to cancel it with another blackslash like \\ 

   return 0;




}


/* Escape Sequence : 


\n is considered as a single character isntead of 2 characters like \ and n .

Escape sequence is a seires of characters
it is composed of 2 or more characters starting with a blackslash. 
\a :Alarm or Beep
\b : Backspace
\t : Tab ( Horizontal )
\n :new line character
\' : Single Quote
\" : Double Quote



*/