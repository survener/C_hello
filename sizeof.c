#include <stdio.h>

int main()
{
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(double)=%ld\n", sizeof(double));
    printf("sizeof(long)=%ld\n", sizeof(long));
    printf("sizeof(long long)=%ld\n", sizeof(long long));
    printf("sizeof(char)=%ld\n", sizeof(char));
    printf("sizeof(short)=%ld\n", sizeof(short));

    char c=255;
    int i=255;
    printf("c=%d, i=%d\n", c, i);

    printf("%d", '1');
    i =1;
    switch (i) {
    case 1:
        ;
        int b=1;
        printf("1: %d\n", b);
        break;
    case 2:
        double c=2;
        printf("2: %d\n", c);
        break;
    }
    return 0;
}

