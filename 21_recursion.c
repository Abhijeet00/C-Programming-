#include <stdio.h>

int r(int n){
       if (n==0) {
        return 1;
       }
       if (n==1)
       {
        return 1;
       }

    else { 
        return n*r(n-1);
    }
}
int main() {
   int n;
   printf("Enter the number you want factorial of :\n");
   
   scanf("%d", &n);
   printf(
    "Factorial is %d", r(n) );
}