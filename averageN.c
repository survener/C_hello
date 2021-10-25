#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;

    scanf("%d", &number);

    while (number != -1){
        count++;
        sum += number;
        scanf("%d", &number);
    }

    printf("输入了%d位数，平均数是：%f\n.", count, 1.0*sum/count);
}