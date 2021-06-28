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

    // reverse logic ....
    int i = 0 ;
    int j = n-1 ;

    while(i < j)
    {
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++ ;
        j-- ;
    }

    // display
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t", arr[i]) ;
    }

    return 0 ;
}