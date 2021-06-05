#include<stdio.h>

int main()
{
    int marks = 50 ;

    printf("hello\n") ;

    if(marks >= 90)
    {
        printf("A+\n") ;
    }
    else if(marks >= 80)
    {
        printf("A\n") ;
    }
    else if(marks >= 70)
    {
        printf("B\n") ;
    }
    else if(marks >= 60)
    {
        printf("C\n") ;
    }

    printf("bye\n") ;

    return 0 ;
}