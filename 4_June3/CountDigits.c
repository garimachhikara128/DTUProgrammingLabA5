#include<stdio.h>

int main()
{
    int n ;

    printf("Enter n ?\n") ;
    scanf("%d", &n) ;

    int count = 0 ;

    while(n != 0)
    {
        n = n / 10 ;
        count = count + 1 ;
    }

    printf("No. of digits are %d", count) ;

    return 0 ;
}