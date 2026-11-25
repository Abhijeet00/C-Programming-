#include <stdio.h>


 int f_r(int n){
    int a=0;
    int b=1;

    for (int i=0; i<n-1 ; i++) {
        b=a+b;
        a=b-a;
        
    }
 }

 int main(){
        int n;
        printf("enter the value of n for f(n): \n");
        scanf("%d",&n);
        printf("%d is the value of f(%d) iteratively", f_iterative(n), n);
        return 0;
    }
