#include<stdio.h>

int main()
{
    int n , rot ;

    printf("Enter n ? ") ;
    scanf("%d", &n) ;

    printf("Enter rotations ? ") ;
    scanf("%d", &rot) ;

    // number of digits
    int nod = 0 ;
    int temp = n ;
    while(temp != 0)
    {
        temp = temp / 10 ;
        nod = nod + 1 ;
    }

    // 10 ^ nod-1
    int mult = 1 ;

    int i = 1 ;
    while(i <= nod-1)
    {
        mult = mult * 10 ;
        i = i + 1 ;
    }

    rot = rot % nod ;
    
    int r = 1 ;
    while(r <= rot)
    {
        // single rotation logic 
        int ld = n % 10 ;
        int rest = n / 10 ;
        int ans = ld * mult + rest ;

        // printf("%d. %d\n", r, ans) ;

        n = ans ;
        r = r + 1 ;
    }

    printf("Rotated no. is %d\n", n) ;


    return 0 ;
}