#include <stdio.h>

int main() {

    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");

    /*shift + alt + down / up for copying*/

    int a,b;
    printf ("Enter number a:");
    scanf("%d",&a);
    printf ("Enter number b:\n");
    scanf("%d",&b);
    
    
    return 0;
}

/*How does compiler and linkers work . step wise

preprocessing 
compilation
assembly
linking

gcc -Wall -save-temps 4.c -o 4_as_a_executable
this creates 1 file with .i extension which is preprocessed file
here program comments are removed , macros are expanded , header files are included and the output is stored in 4_as_a_executable-4.i file

this creates 1 file with .s extension which is assembly file
assembly level instructions are generated and the output is stored in 4_as_a_executable-4.s file

this creates 1 file with .o extension which is object file
.o files have binary code which is not human readable and the output is stored in 4_as_a_executable-4.o file
this creates 1 file with .exe extension which is executable file

you can not open the .o file in notepad or any text editor because it is not human readable

last step is linking where all the .o files are linked together to create a single executable file


*/