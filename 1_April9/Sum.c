#include<stdio.h>

int main()
{
    int a ;
    int b ;

    printf("Enter the value of a ?\n") ;
    scanf("%d", &a) ;

    printf("Enter the value of b ?\n") ;
    scanf("%d", &b) ;

    int sum ;
    sum = a + b ;

    printf("Sum of %d and %d is %d", a, b, sum) ;

    return 0 ;
}