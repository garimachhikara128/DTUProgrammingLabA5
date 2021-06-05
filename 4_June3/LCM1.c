#include<stdio.h>

int main()
{

    int n1 , n2 ;

    printf("Enter two nos ?\n") ;
    scanf("%d %d", &n1 , &n2) ;

    int max = n1 > n2 ? n1 : n2 ;

    int i = max ;

    while(i <= n1 * n2)
    {
        if(i % n1 == 0 && i % n2 == 0)
        {
            break ;
        }

        i = i + 1 ;
    }

    printf("LCM of %d and %d is %d\n", n1, n2, i) ;

    return 0 ;
}