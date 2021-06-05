#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int count = 0 ;

    int div = 2 ;
    while(div <= n/2)
    {
        if(n % div == 0)
        {
            count = count + 1 ;
            break ;
        }

        div = div + 1 ;
    }

    if(count == 0)
        printf("%d is prime", n) ;
    else
        printf("%d is not prime", n) ;
        
    return 0 ;
}