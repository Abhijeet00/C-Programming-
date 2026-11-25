#include <stdio.h>
 
int f_recursive (int n) { 
    if (n==0) {return 0;}
    if (n==1 || n==2) {return 1;}
    else 
    {
        return f_recursive(n-1) + f_recursive(n-2);

    } }

    int f_iterative(int n) {
        // fibonacci series is 0 1 1 2 3 5 8 13 21 34

        int a=0;
        int b=1;
        int c;

        for (int i=1 ; i<n; i++)
        {
            a=a+b;
            b=a+b;

            if (n%2==0 && i==n/2) { c=a;

                return c; } 

            if (n%2!=0 && i==(n-1)/2)
                 {c=b; return c;}
          } }


 

    

    int main(){
        int n;
        printf("enter the value of n for f(n): \n");
        scanf("%d",&n);
        printf("%d is the value of f(%d)\n", f_recursive(n), n);
        printf("%d is the value of f(%d) iteratively", f_iterative(n), n);
        return 0;
    }
