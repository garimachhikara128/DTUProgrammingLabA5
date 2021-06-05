#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int sum = 0 ;

    while(n != 0)
    {
        int ld = n % 10 ;
        sum = sum + ld ;
        n = n / 10 ;
    }

    printf("Sum of Digits is %d", sum) ;

    return 0 ;
}