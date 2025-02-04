#include<stdio.h>
int main()
{
    int n,i,j,k,m;

    printf("enter the value of n=");
    scanf("%d",&n);
    for( i=n ; i>=1 ; i--)
    { for( j=i ; j>=1 ;j--)
        printf("  ");
         for( k=i ;k<=n;++k)
        {
            printf("* ");
        }
        for( m=0;m>=k;--m)
        {
            printf("* ");
        }
        {
            printf("\n");
        }
    }
return 0;


}