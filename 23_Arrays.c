#include <stdio.h>

int main () {
    int mark[4];
    mark[0]=34;
    mark[1]=96;
    mark[2]=20;
    mark[3]=44;
    for(int i=1 ; i<=4 ; i++){
        printf("Marks of student with roll number %d is %d \n", i , mark[i-1]);
    }
   
    int roll[4];
     for(int i=1 ; i<=4 ; i++){ 
        printf("Enter your roll number \n");
        scanf("%d", &roll[i-1]);
return 0; 
}