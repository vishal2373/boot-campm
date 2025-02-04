#include<stdio.h>
int main()
{
    int a,i,hf;
    printf("enter the highest factor=");
    scanf("%d",&a);
    for(i=a-1;i>=1;i--)
    
         if(a%i==0)
         {
            hf=i;
            break;
         }
         
    printf("%d\n",i);
    return 0;
}