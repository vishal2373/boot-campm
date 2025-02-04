#include<stdio.h>
int main()
{
int n,r,sum=0;
printf("enter the value of n=");
scanf("%d",&n);
int m=n;
for( int i=n;i>0; )
{
    r=i%10;
    sum=sum*10+r;
    i=i/10;
}
// // do{
// //    r=n%10;
//    sum=sum*10+r;
//    n=n/10;
// }while(n>0);
if(m==sum)
{
    printf("palindrome");
}
else{
   printf("not palindrome");
}

 return 0;
}