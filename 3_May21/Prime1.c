#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int count = 0 ;

    int div = 1 ;
    while(div <= n)
    {
        if(n % div == 0)
        {
            count = count + 1 ;
        }

        div = div + 1 ;
    }

    if(count == 2)
        printf("%d is prime", n) ;
    else
        printf("%d is not prime", n) ;
        
    return 0 ;
}