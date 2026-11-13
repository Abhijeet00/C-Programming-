#include <stdio.h>
int main(){

    int num;
   
    int index=6;
    printf("enter a number : \n ");
    scanf("%d",&num);

    int i,j;

    for (i=0; i<num ; i++){
        
        printf("%d\n",i);
    
    }

    for (i=0 , j=0 ; i<num ; i++){
        printf (" %d %d \n" , i , j );
    }
    printf("Yoho");
    return 0;
}