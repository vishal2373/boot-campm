#include<stdio.h>

int sum(int n);
int main()
{
int n,add;
printf("enter the value of n=");
scanf("%d",&n);
add=sum(n);
printf("sum of n is %d",add);
return 0;
}

int sum(int n)
{
    if (n==0){
        return n;
    }
    else
    {
        return n+sum(n-1);
    }
}
