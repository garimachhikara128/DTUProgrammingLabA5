#include<stdio.h>

int main()
{
    int divident , divisor ;

    printf("Enter two nos ?\n") ;
    scanf("%d %d", &divident , &divisor) ;

    while(1)
    {
        int rem = divident % divisor ;

        if(rem == 0)
            break ;

        divident = divisor ;
        divisor = rem ;
    }

    printf("GCD is %d", divisor) ;

    return 0 ;
}