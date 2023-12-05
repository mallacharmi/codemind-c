#include<stdio.h>
int main()
{
    int i,x,y,sum1=0,sum2=0; 
    scanf("%d%d",&x,&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        sum1+=i;
    }
    for(i=1;i<y;i++)
    {
        if(y%i==0)
        sum2+=i;
    }
    if((sum1==y) && (sum2==x))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}