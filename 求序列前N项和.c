/*
@time 20220105 19:41;
@auther sr;
@file 求序列前N项和.c
*/

/*
本题要求编写程序，计算序列2/1+3/2+5/3+8/5+...的前N项之和。
注意该序列从第2项起，每项的分子是前一项分子与分母的和，分母是前一项的分子。
输入格式：
输入在一行中给出一个正整数N。
输出格式：
在一行中输出部分和的值，精确到小数点后2两位。题目保证计算结果不超过双精度范围。
输入样例：
20
32.66
*/

#include <stdio.h>

int main()
{
    int n;
    double dividend,divisor;
    double sum=0.0;
    int i;
    double t;

    scanf("%d", &n);
    dividend=2;
    divisor=1;
    for ( i=1; i<=n; i++)
    {
        sum+=dividend/divisor;
        t=dividend;
        dividend=dividend+divisor;
        divisor=t;
    }
    printf("%.2f\n", sum);
    return 0;
}


/*
1. 定义的变量类型，如题中说明双精度，提前设定好double;
2. double sum=0.0;
3. 替换方法，在需要上一个数处理时，通过替换存储值再下一次进行赋值；
4. 2位小数点输出%.2f;
*/