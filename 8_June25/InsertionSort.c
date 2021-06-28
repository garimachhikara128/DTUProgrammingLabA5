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

    // insertion sort 
    for(int count = 1 ; count <= n-1 ; count++)
    {
        int item = arr[count] ;

        int j = count - 1 ;
        while(j >= 0 && arr[j] > item)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }

        arr[j+1] = item ;
    }

    // array display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t", arr[i]) ;
    }

    return 0 ;
}