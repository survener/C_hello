#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int digit;
    int reg; 
    while ( x>0 )
    {
        digit = x%10;
       printf("%d", digit);
       // reg = reg*10 + digit;
        x /= 10;
      //  printf("%d\n", reg);
    }

    return 0;
}