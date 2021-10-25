#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int i;
    double sum=0;
    double sign=1.0;
    for ( i=1;i<=n;i++){
        sum += sign/i;
        sign = -sign;
    }
    printf("f(%d)=%f\n", n, sum);
}
