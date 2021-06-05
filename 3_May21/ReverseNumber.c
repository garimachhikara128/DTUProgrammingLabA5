#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int ans = 0 ;

    while(n != 0)
    {
        int ld = n % 10 ;
        ans = ans * 10 + ld ;
        n = n / 10 ;
    }

    printf("Reverse no is %d\n", ans) ;

    return 0 ;
}