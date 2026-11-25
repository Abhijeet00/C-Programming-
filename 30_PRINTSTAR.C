// *
// **
// ***
// **** triangular star pattern 

// *****
// ****
// ***
// **
// * reverse star pattern 


#include <stdio.h>

void starpattern(int rows)
 {
    for (int i =0 ; i < rows ; i++) {
        for (int j=0; j<=i ; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void reverse(int rows)
{
    for (int i=0 ; i<rows ; i++) {
        for (int j=rows-i ; j>0 ; j-- ) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int rows;

    printf("How many rows do you want :\n");
    scanf("%d", &rows);
    starpattern(rows);
    printf("ok \n") ;
    reverse(rows);




}