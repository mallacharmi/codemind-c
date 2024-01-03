#include<stdio.h>
int main()
{
    int a,b,i,x,m;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=a*i;
        if(m%b==0)
        {
            x=m;
            break;
        }
    }
    printf("%d",x);
}