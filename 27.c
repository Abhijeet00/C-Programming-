#include <stdio.h>

int main() {
    int tar[] = {30,21,25,5,6,27};
    printf("Value at index 3 of the array is %d \n",tar[3]);
    printf("The address of first element of the array is %d \n", &tar[0]);
    printf("The address of first element of array is %d \n", tar);
    printf("The address of second element of array is %d \n", &tar[1]);
    printf("The address of second element of array is %d \n", tar + 1);

    printf("The value at address of first element is %d \n", *(&tar[0]));
    printf("The value at address of first element is %d \n", *(tar));
    printf("The value at address of second element is %d \n", *(tar+1));

    int* tarptr = tar;
    tarptr++ ;
    printf("%d\n", tarptr);
    
    return 0;


}