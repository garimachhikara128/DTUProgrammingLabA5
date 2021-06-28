#include<stdio.h>
#include<limits.h>

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

    // array max
    int max = INT_MIN ;

    for(int i = 0 ; i <= n-1 ; i++)
    {        
        if(arr[i] > max)
        {
            max = arr[i] ;
        }
    }

    printf("Maximum of array is %d", max) ;

    return 0 ;
}