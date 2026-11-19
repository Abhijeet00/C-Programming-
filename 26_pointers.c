#include <stdio.h>

int main() {
    int a=63;
    int* ptra= &a;
    printf("%x\n", ptra);  
    printf("%d\n", *ptra);
    printf("%x\n", &ptra);
}