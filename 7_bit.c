/* Bitwise Operators:
   it is just like logical operator but . it first converts the whole number into binary , then stacks number on each other 
   and then performs logical operations on each number and gives the result 
   say 
   2&3 , 2 is 10 in binary , 3 is 11 in binary  10/11  = 10 = 2 in decimal.
   
   all the bitwise operators are:
    & : and gate , if both the operands are non zero then condition becoems true.
    | : or gate , if any of the one operand is non zero then condition becomes true.
    ^ : xor gate , if both the operands are same then condition becomes false and if both the operands are different then condition becomes true.
     rest ones explore later. ( maybe when studyying for midsems )
    
    
    
    ~ : not gate , it is used to revserse the logical state of its operand. if a condition is true then logical NOT operator will make it false and vice versa.
    << : left shift operator , it shifts the bits of the first operand to the left by the number of positions specified by the second operand.
    >> : right shift operator , it shifts the bits of the first operand to the right by the number of positions specified by the second operand.





*/

#include <stdio.h>

int
    main()
    {
    int a,b,c,d;
    a=2;
    b=3;
    // 2 is 10 , 3 is 11 . apply and , or , xor . and = 10 (2), or = 11 (3) , xor = 01 (1)
    printf("a&b:%d\n", a&b);
    printf("a|b:%d\n", a|b);
    printf("a^b:%d\n", a^b);
   
        return 0;
    printf("a|b:%d\n", a|b);
    }