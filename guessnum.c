#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //初始化
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int a = 0;

    printf("我已经想好一个1到100的整数了。\n");
    
    //判断
    do
    {
        printf("请猜猜这个数：\n");
        scanf("%d", &a);
        count++;

        if (  a>number )
        {
           printf("你猜的数字大了，继续猜吧。\n");
        } else if ( a<number )
        {
            printf("你猜的数字小了,继续猜吧\n");
        }   
    } while ( a != number );
    printf("不错，你用了%d次猜出%d啦！\n", count, a);
}