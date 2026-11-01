#include <stdio.h>

int main()
{
    printf("%d\n", sizeof(int)); /*prints the size of int data type in bytes*/
    printf("%lu\n", sizeof(char)); /*prints the size of char data type in bytes*/
    printf("%lu\n", sizeof(float)); /*prints the size of float data type in bytes*/
    printf("%lu\n", sizeof(double)); /*prints the size of double data type in bytes*/
    printf("%lu\n", sizeof(void)); /*prints the size of void data type in bytes*/
    printf("%lu\n", sizeof(long)); /*prints the size of long data type in bytes*/
    printf("%lu\n", sizeof(short)); /*prints the size of short data type in bytes*/
    printf("%lu\n", sizeof(long long)); /*prints the size of long long data type in bytes*/
    printf("%lu\n", sizeof(unsigned int)); /*prints the size of unsigned int data type in bytes*/
    printf("%lu\n", sizeof(unsigned char)); /*prints the size of unsigned char data type in bytes*/
    printf("%lu\n", sizeof(unsigned long)); /*prints the size of unsigned long data type in bytes*/
    printf("%lu\n", sizeof(unsigned short)); /*prints the size of unsigned short data type in bytes*/
    printf("%lu\n", sizeof(unsigned long long)); /*prints the size of unsigned long long data type in bytes*/
    printf("%lu\n", sizeof(signed int)); /*prints the size of signed int data type in bytes*/
    printf("%lu\n", sizeof(signed char)); /*prints the size of signed char data type in bytes*/
    printf("%lu\n", sizeof(signed long)); /*prints the size of signed long data type in bytes*/
    printf("%lu\n", sizeof(signed short)); /*prints the size of signed short data type in bytes*/
    printf("%lu\n", sizeof(signed long long)); /*prints the size of signed long long data type in bytes*/
    printf("%lu\n", sizeof(_Bool)); /*prints the size of _Bool data type in bytes*/
    printf("%lu\n", sizeof(_Complex)); /*prints the size of _Complex data type in bytes*/

    return 0;
}