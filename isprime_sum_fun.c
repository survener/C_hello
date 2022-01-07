/*
@date     20220107 10:44
@author   sr
@file     isprime_sum_fun.c

统计素数并求和

本题要求统计给定整数M和N区间内素数的个数并对他们求和。
输入格式：
输入在一行中给出2个正整数M和N（1<=M<=N<=500）。
输出格式：
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
输入样例：
10 31
输出样例：
7 143
*/

#include <stdio.h>

int isPrime(int i)
{
    int k;
    int ret=1;
    for ( k=2; k<i-1; k++ ){
        if ( i%k==0 ){
            ret=0;
            break;
        }
    }
    return ret;  
}

int main(){
    int m,n;
    int cnt=0;
    int sum=0;

    scanf("%d %d", &m, &n);
    if ( m==1 ){
        m=2;
    }
    int i;
    for ( i=m; i<=n; i++){
        //素数统计
        if ( isPrime(i) ){
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}

/*
1. 函数里面的return ret；注意位置，break跳出循环后函数能否返回相应的值；
2. int isPrime(int i)，前面int指的是函数返回的结果类型为int；
*/