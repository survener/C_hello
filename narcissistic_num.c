/*
@time   20211023 12:19
@auth   sr
@file   narcissistic_num.c
*/

/*
水仙花数是指一个N位的正整数(N>=3)，它的每个位数上的数字的N次幂之和等于它本身。
例如：153=1^3+5^3+3^3，本题要求编写程序，计算所有N位水仙花数。
输入格式：
输入在一行中给出一个正整数N(3<=N<=7)。
输出格式：
按递增顺序输出所有N位水仙花数，每个数字占一行。
输入样例：
3
输出样例：
153
370
371
407
*/


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int i;
    int first=1;
    for ( i=1;i<n;i++ ){
        first *= 10;
    }

    //遍历100～999
    int t;
    i = first;
    int d;
    int p;
    while ( i < first*10 ){
        t = i;
        int sum=0;
        do {
            d = t%10;
            t /= 10;
            
            p = d;
            int j = 1;
            while ( j<n )
            {
                p *= d;
                j++;
            }
            sum += p;
        } while ( t>0 );
        
        if ( sum==i ){
            printf("%d\n",sum);
        }
        i++;
    }
 }