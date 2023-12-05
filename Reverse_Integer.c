#include<stdio.h>
int main()
{
    short int a;
    scanf("%d",&a);
    int r,rev=0;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("%d",rev);
}