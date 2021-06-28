#include<stdio.h>

int main()
{
    int n ;

    // take input of size
    printf("Enter the no. of elements in array ?\n") ;
    scanf("%d", &n) ;

    // array create
    int arr[n] ;

    // take input of array
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("arr[%d] ? ", i) ;
        scanf("%d", &arr[i]) ;
    }

    // array sum

    int sum = 0 ;   
    for(int i = 0 ; i <= n-1 ; i++)
    {
        sum = sum + arr[i] ;
    }

    printf("Sum is %d", sum) ;

    return 0 ;
}