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

    // array bubble sort
    for(int count = 0 ; count <= n-2 ; count++)
    {
        for(int j = 0 ; j <= n - count - 2; j++)
        {
            if(arr[j] > arr[j+1])
            {   
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }

        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t", arr[i]) ;
    }

    
    return 0 ;
}