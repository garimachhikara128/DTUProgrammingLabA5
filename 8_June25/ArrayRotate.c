#include<stdio.h>

int main()
{
    int n ;

    // take input of size
    printf("Enter the no. of elements in array ? ") ;
    scanf("%d", &n) ;

    // array create
    int arr[n] ;

    // take input of array
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("arr[%d] ? ", i) ;
        scanf("%d", &arr[i]) ;
    }

    int rot ;

    printf("Rotations ? ") ;
    scanf("%d", &rot) ;

    rot = rot % n ;

    for(int r = 1 ; r <= rot ; r++)
    {
        // single rotation
        int temp = arr[n-1] ;

        for(int i = n-1 ; i >= 1 ; i--)
        {
            arr[i] = arr[i-1] ;
        }

        arr[0] = temp ;
    }

    // array display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t", arr[i]) ;
    }

    return 0 ;
}