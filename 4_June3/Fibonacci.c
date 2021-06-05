#include<stdio.h>

int main()
{

    int n ;

    printf("Enter n ?\n") ;
    scanf("%d", &n) ;

    // a and b will keep track of last 2 nos
    int a = 0;
    int b = 1;

    // run your loop for n+1 times : 0 -> n or 1 -> n+1
    int count = 0 ;
    while(count <= n)
    {
        // new no. will be sum of prev two
        int sum = a + b ;

        printf("%d\t", a) ;

        // update a & b -> so that you are able to find the next fib no.
        a = b ;
        b = sum ;

        count = count + 1 ;
    }












    return 0 ;
}