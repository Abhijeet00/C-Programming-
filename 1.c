#include <stdio.h>       /*pre processor directive , brings the files of standard input output header*/

int main() { /*main () is telling that my program starts heare , int is the value type returned by main function */
    
    printf("Hello, World!\n"); /* print f is one of the function in stdio.h*/
    return 0;
}


   /*
   When your program finishes running, the operating system (Windows/Mac/Linux) wants to know: "Did that program actually succeed, or did something go wrong?"

That's what the returned number is for — it's called an exit code (or exit status).

return 0; → means "everything worked perfectly, no errors."
Any other number (like return 1;, return 2;, etc.) → means "something went wrong," and different numbers can mean different specific errors.
   
   
   */
/*so for now as a beginer what i need to know is that if my program is returning the correct value it has been executed perfectly nothing else for now
*/was