/*
@time   20220107 15:06;
@auther sr;
@file   数组数字出现次数.c
*/

/*
写一个程序，输入数量不确定的[0,9]范围内的整数，
统计每一种数字出现的次数，输入-1表示结束
*/

#include <stdio.h>

int main(void)
{
    const int number=10;
    int n;
    int cnt[number];
    int i;

    for ( i=0; i<number; i++)
    {
        cnt[i]=0;
    }
    
    do{
        scanf( "%d", &n );
        if( n>=0 && n<=9 )
        {
        cnt[n]++;
        }
    }while( n!=-1 );

    for (i=0; i<number; i++)
    {
        printf("%d出现%d次\n", i, cnt[i]);
    }
    return 0;
}

/*
1. 确定数组的容量并定义；
2. 初始化数组。数组可以参与运算：cnt[n]++；
3. 数组的下标可以作为计数器，同时对应的数值作为出现的次数统计；
4. 通过遍历方式，输出数组下标对应的数值；
*/