/*
@time   20220106 0840;
@auther sr;
@file   念数字.c;
*/

/*
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：
输入在一行中给出一个整数，如：1234。
提示：整数包括负数、零和整数。
输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如yi er san si。
输入样例：
-600
输出样例
fu liu ling ling
*/

#include <stdio.h>

int main()
{
    int num;

    //处理负数
    scanf("%d", &num);
    if ( num<0 ){
        printf("fu ");
        num=-num;        
    }

    //计算位数，从左获取数字
    int a=num;
    int t=1;
    while ( a>9 ){
        a/=10;
        t*=10;
    }

    do
    {
        int d = num/t;
        switch (d)
        {
        case 0:printf("ling");  break;
        case 1:printf("yi");    break;
        case 2:printf("er");    break;
        case 3:printf("san");   break;
        case 4:printf("si");    break;
        case 5:printf("wu");    break;
        case 6:printf("liu");   break;
        case 7:printf("qi");    break;
        case 8:printf("ba");    break;
        case 9:printf("jiu");   break;
        }
        if ( t>9 ) printf(" ");
        num%=t;        
        t/=10;
    } while ( t>0 );
}

/*
1. %，获取前多少位；需要配合t，即计算多少个10后，%t获得左第一位；
2. /，获取后多少位；
3. switch (匹配目标),case 匹配项:匹配内容；匹配完成后可中断或不中断；default，无匹配默认输出；
4. 只做简短if判断时，后面可不带{}，判断结束";"结尾。
5. int可后接表达式.
*/