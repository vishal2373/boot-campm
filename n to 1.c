#include<stdio.h>
int natural(int n);
int main()
{
  int n,count;
  printf("enter the value of n=");
  scanf("%d",&n);
  count=natural(n);
//   printf("the no. are %d",count);
  return 0;

}
 int natural(int n)
 {
    if(n==1)
    {
    return 0;
    
    }
    else
    {
       printf("%d",n); 
       printf( "%d",natural(n-1));
    }
 }