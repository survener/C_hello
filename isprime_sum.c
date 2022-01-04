/*
@date     20220104 20:11
@author   sr
@file     isprime_sum.c

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
        //判断是否为素数
        int isPrime=1;
        int k;
        for ( k=2; k<i-1; k++ ){
            if ( i%k==0 ){
            isPrime=0;
            break;
            }
        }
        //素数统计
        if (isPrime){
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}