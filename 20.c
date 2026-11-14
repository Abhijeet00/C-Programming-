#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number you want table of :\n");
    scanf("%d", &num);

    for (int i=0 ; i<=10 ; i++)
    {printf("%dx%d = %d \n", num , i , num*i);
    }
}