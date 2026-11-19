#include <stdio.h> 

int f(int n ) { if (n==0) { return 0;}
                if (n==1 || n==2) {return 1;}
                else return f(n-1)+ f(n-2);


}

int main () {


    int n;
    printf("Enter the n in F(n): \n");
    scanf("%d", &n);
    printf("Value of fibbonaci(%d) is %d", n , f(n));


}