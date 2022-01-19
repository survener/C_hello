#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i;
    printf("int类型占用内存%d个字节.\n", sizeof(a[0]));
    for ( i=0; i<10; i++ )
    {
        a[i]=i;
        printf("a[%d]在内存中的地址为%X\n", i, &a[i]);
    }
    return 0;
}

