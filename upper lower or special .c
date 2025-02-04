#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character=");
    scanf("%c",&ch);
    if ((ch>='a') && (ch<='z'))
    {
        printf("lower case");
    }
    else if((ch>='A') && (ch<='Z'))
    {
        printf("upper case");
    }
   else if((ch>='0') && (ch<='9'))
    {
        printf("digits");
    }
    else 
    {
        printf("special character");
    }
    return 0;
}