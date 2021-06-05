#include<stdio.h>

int main()
{
    int n ;

    printf("Enter the number ?\n") ;
    scanf("%d", &n) ;

    int rem = n % 2 ;

    if(rem == 0)
        printf("%d is even", n) ;
    else
        printf("%d is odd", n) ;

    return 0 ;
}