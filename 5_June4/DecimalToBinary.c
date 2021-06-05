#include<stdio.h>

int main()
{
    int n ;

    printf("Enter n ? ") ;
    scanf("%d", &n) ;

    int ans = 0 ;
    int mult = 1 ; // 10 ^ 0 

    while(n != 0)
    {
        int rem = n % 2 ;
        ans = ans + rem * mult ;
        n = n / 2 ;

        mult = mult * 10 ;
    }

    printf("Binary is %d", ans) ;

    return 0 ;
}