#include<stdio.h>

int main()
{
    int n ;

    printf("Enter n ? ") ;
    scanf("%d", &n) ;

    int ans = 0 ;
    int mult = 1 ; // 2 ^ 0 

    while(n != 0)
    {
        int rem = n % 10 ;
        ans = ans + rem * mult ;
        n = n / 10 ;

        mult = mult * 2 ;
    }

    printf("Decimal is %d", ans) ;

    return 0 ;
}