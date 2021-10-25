#include <stdio.h>
int main()
{
    int x = 0;
    int n1 = 0;
    int y = 0;
    int n2 = 0;
    scanf("%d %d", &x, &y);

    while ( x > 0 ){
        n1++;
        x /= 10;
    }
    printf("x是%d位数。\n", n1);

    do
    {
        n2++;
        y /= 10;
    } while (y > 0);
    printf("y是%d位数。\n", n2);
    return 0;
}