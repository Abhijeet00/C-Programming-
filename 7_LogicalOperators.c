
/* Logical Operators :
  &&: and gate , if both the operands are non zero then condition becoems true.
  || : or gate , if any of the one operand is non zero then condition becomes true.
  ! : not gate , it is used to revserse the logical state of its operand. if a condition is true then logical NOT operator will make it false and vice versa.

*/
#include <stdio.h>
int main()
{


     int a,b,c,d;
    a=36;
    b=36;
    c=0;
    d=12;
     printf("a&&b:%d\n", a&&b);
     printf("c&&d:%d\n", c&&d);
     printf("a||b:%d\n", a||b);
     printf("c||d:%d\n", c||d);
     printf("!a:%d\n", !a);
     printf("!c:%d\n", !c);
     return 0;
}
