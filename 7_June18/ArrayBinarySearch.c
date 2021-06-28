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

    int item ;

    printf("Enter the item to be searched ?\n") ;
    scanf("%d", &item) ;

    // binary search logic ...
    int res = -1 ;

    int lo = 0 ;
    int hi = n - 1 ;

    while(lo <= hi)
    {
        int mid = (lo + hi)/2 ;

        if(item > arr[mid]) // RHS
            lo = mid + 1 ;
        else if(item < arr[mid]) // LHS
            hi = mid - 1 ;
        else
        {
            res = mid ;
            break ;
        }

    }

    printf("%d is present at %d index", item, res) ;

    return 0 ;
}