#include<stdio.h>
int main()
{
    int n,a,b,count=0;
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        if(n%2==0 && n%3==0)
        {
            count++;
        }
    }
    printf("%d",count);
}