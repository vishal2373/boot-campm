#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter the sides=");
    scanf("%d%d%d",&a,&b,&c);
     printf("enter the angle.=");
    scanf("%d%d%d",&d,&e,&f);
    if (d+e+f==180)
    {
    if(a+b>c || b+c>a || a+c>b){
        printf("triangle is valid");
    }
    else{
        printf("not a triangle");
    }
    }
    else{
        printf("not a valid triangle");
    }
    
    
return 0;
}

