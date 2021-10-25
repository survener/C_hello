/*
@time    20211023 9:46
@auth   sr
@file   1234-1.c
@status add
*/

#include <stdio.h>

int main(){
    int a;
    int i,j,k;
    int cnt=0;
    scanf("%d",&a);

    for( i=a;i<=a+3;i++ ){
        for( j=a;j<=a+3;j++ ){
            for( k=a;k<=a+3;k++ ){
                if( i!=j && j!=k && i!=k ){
                    printf("%d%d%d",i,j,k);
                    cnt++;
                    printf(" ");
                    if( cnt==6 ){
                        printf("\n");
                        cnt=0;
                    }
                }
            }
        }
    }
}