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

    // selection sort logic ...
    for(int count = 0 ; count <= n-2 ; count++)
    {
        int minidx = count ;

        for(int j = count + 1 ; j <= n-1 ; j++)
        {
            if(arr[j] < arr[minidx])
            {
                minidx = j ;
            }
        }

        int temp = arr[count] ;
        arr[count] = arr[minidx] ;
        arr[minidx] = temp ;

    }

    // array display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t", arr[i]) ;
    }

    return 0 ;
}