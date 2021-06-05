#include<stdio.h>

int main()
{
    int n1 , n2 ;

    printf("Enter two nos ?\n") ;
    scanf("%d %d", &n1 , &n2) ;

    int min = n1 > n2 ? n2 : n1 ;

    int i = min ;
    while(i >= 1)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            break ;
        }

        i = i - 1 ;
    }

    printf("GCD of %d and %d is %d", n1, n2, i) ;

    return 0 ;
}