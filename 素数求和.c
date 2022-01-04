/*
@time 2021/01/04 16:31
@auth sr
@file 统计素数并求和.c
*/

/* 题目
本题要求统计给定整数M和N区间内素数的个数并对它们求和。
输入格式：
输入在一行中给出2个正整数M和N（1<=M<=N<=500）.
输出格式：
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
输入样例：
10 31
输出样例：
7 143
*/

#include <stdio.h>

int main(){
    int M,N;
    int i;
    int cnt=0;
    int sum=0;

    scanf("%d %d", &M, &N);
    if ( M==1 ){
        M=2;
    }
    for ( i=M; i<=N; i++ ){
        //判断i是否为素数
        int isPrime=1;
        int k;
        for ( k=2; k<i-1; k++ ){
            if ( i%k == 0 ){
                isPrime = 0;
                break;
            }
        }

        //求和
        if ( isPrime ){
            cnt++;
            sum+=i;  
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}

/*
知识点：
1. i%k == 0 取余
2. 1不是素数，统计时请注意！
3. break跳出本次循环走到累加部分，break前重置数值，跳过本次数值累加
4. 通过定义数值，来重新定义输入的起始数值
*/