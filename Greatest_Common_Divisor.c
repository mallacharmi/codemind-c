#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    for(int i=b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            x=i; 
            break;
        }
    }
    printf("%d",x);
}