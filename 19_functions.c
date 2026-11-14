#include <stdio.h>

int sum(int a, int b);
/*This is called function prototyping.*/

int main() { int a=4 , b=3 , c; 

    c = sum(a,b);
    printf("%d\n", c);
    return 0;
}

int sum( int a, int b) {
    return a+b;
}