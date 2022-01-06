/*
@time   20220106 10:42;
@auther sr;
@file   求连续和.c; 
*/

/*
输入两个整数a和n，a的范围是[0，9]，n的范围是[1，8]，
求数列之和S = a+aa+aaa+...+aaa...a(n个a)。
如a为2、n为8时输出的是2+22+222+...+22222222的和。
输入格式：
输入在一行中给出两个整数，先后表示a和n。
输出格式：
在一行中输出要求的数列之和。
输入样例：
2 4
输出样例：
2468
*/

/*
#include <stdio.h>

int main()
{
    int a,n;
    int sum=0;
    int cnt;

    scanf( "%d %d", &a, &n );
    int b=a;
    int c=a;
    for ( cnt=1; cnt<=n; cnt++){
        sum+=a;
        b=a*10;
        a=b+c;
    }
    printf("%d\n", sum);
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int a,n;
    int sum=0;

    scanf( "%d %d", &a, &n );
    int t=0;
    int i;
    for ( i=0; i<n; i++){
        t=t*10+a;
        sum+=t;
    }
    printf("%d\n", sum);
    return 0;
}