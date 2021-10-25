#include <stdio.h>

int main()
{
    int x;
    //scanf("%d", &x);
   
    for ( x=2;x<10;x++ ){
        int i;
        int isprime = 1;
        for ( i = 2; i < x; i++)
        {
        if( x%i == 0 ){
            isprime = 0;
            continue;
        }
        }
        if ( isprime == 1 )
        {
            printf("%d\n", x);
        }
    }
}