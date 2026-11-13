#include <stdio.h> 

int main() {
    

    goto label;
      label:
      printf("mkb aag" );

      int num;

      for(int i=0 ; i<8 ; i++){

        printf( "%d \n" , i );

        for(int j=0; j<8 ; j++) {

            printf("Enter a number , enter 0 to exit \n");
            scanf("%d", &num);

            if (num==0){goto exitt;}
            else {printf("(%d , %d) \n", i , j);}

        }
      }

      exitt: 

      
      return 0;


}