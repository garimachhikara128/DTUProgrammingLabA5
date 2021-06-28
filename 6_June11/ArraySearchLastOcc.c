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

    int item ;
    printf("Enter the item to be searched ?") ;
    scanf("%d", &item) ;

    // array last occurrence search
    int res = -1 ;

    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] == item)
        {
            res = i ;
        }
    }

    printf("Last occurrence of %d is at %d index.", item, res) ;   

    return 0 ;
}