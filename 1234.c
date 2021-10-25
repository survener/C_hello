/* 
@time    20211022 
@auth    sr
@file   1234.c
*/

#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int i,j,k;
    int cnt=0;
    i = a;
    while ( i<=a+3 )
        {
        j=a;
        while ( j<=a+3 )
            {
                k=a;
                while ( k<=a+3 )
                    {
                    if ( i!=j )
                    {
                        if (j!=k)
                        {
                            if ( k!=i)
                            {
                                printf("%d%d%d",i,j,k);
                                printf(" ");
                                cnt++;
                                if ( cnt==6 )
                                {
                                    printf("\n");
                                    cnt=0;
                                }
                                
                            }
                            
                        }
                        
                    }
                 k++;   
                }
            j++; 
            }
        i++;   
    }
   return 0;
}