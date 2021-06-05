#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int count = 1 ; // initialization
    while(count <= n) // condition
    {
        printf("%d\n", count) ;
        count = count + 1; // re-initialization
    }


    return 0  ;
}