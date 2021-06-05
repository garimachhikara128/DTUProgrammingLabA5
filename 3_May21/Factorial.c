#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int res = 1 ;

    int count = 1 ; // initialization
    while(count <= n) // condition
    {
        res = res * count ;
        count = count + 1; // re-initialization
    }

    printf("%d ! =  %d", n , res) ;

    return 0  ;
}