#include<stdio.h>

int main()
{
    int i,n;
    printf("enter the value of n=");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        printf("%d\n",i-2);
    }
    return 0;
}