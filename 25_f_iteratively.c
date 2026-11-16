#include <stdio.h>

int main () {
    int n;

    printf("Enter a value of n for f(n): \n");
    scanf("%d",&n);
    if (n==0) {printf("Value of fibbonaci(0)=0");}
    if (n==1 || n==2) {printf("Value of fib(%d) is 1", n);}

    int fn=0;

    for (i=0 ; i<=n ; i++) { 
        if(i==n) {printf("%d is the value of f(%d)", fn , n);}
        else ( fn= fn )
    }

}