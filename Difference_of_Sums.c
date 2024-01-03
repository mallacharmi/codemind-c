#include<stdio.h>
int main()
{
    int x,z=0,i,a=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        z+=i*i;
    }
    for(i=1;i<=x;i++)
    {
        a+=i;
    }
    printf("%d",(a*a)-z);
}