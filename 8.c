//print the table of number entered by user

#include <stdio.h>
int main()
{
   int num;

   printf("Enter a number: ");
   scanf( "%d", &num);

   printf ("Table of %d is : \n %d x1= %d \n  %d x2 = %d \n %d x3 = %d \n  %d x4 = %d \n %d x5 = %d \n %d x6 = %d \n  %d x7 = %d \n %d x8 = %d \n  %d x9 = %d \n  %d x10 = %d  ",num, num,
    num*1, num, num*2, num, num*3, num, num*4, num, num*5, num, num*6, num, num*7, num, num*8, num, num*9, num, num*10
    );

        printf("Table of %d is:\n", num);
printf("%d x 1 = %d\n", num, num*1);
printf("%d x 2 = %d\n", num, num*2);
printf("%d x 3 = %d\n", num, num*3);
printf("%d x 4 = %d\n", num, num*4);
printf("%d x 5 = %d\n", num, num*5);
printf("%d x 6 = %d\n", num, num*6);
printf("%d x 7 = %d\n", num, num*7);
printf("%d x 8 = %d\n", num, num*8);
printf("%d x 9 = %d\n", num, num*9);
printf("%d x 10 = %d\n", num, num*10);
    
    
    
    
    



}