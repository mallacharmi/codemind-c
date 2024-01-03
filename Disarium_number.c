#include<stdio.h>
#include<math.h>
int main()
{
    int x,sum=0,count=0;
    scanf("%d",&x);
    int v=x;
    while(v!=0)
    {
        v/=10;
        count++;
    }
    int y=x;
    while(y>0)
    {
        int z=y%10;
        int m=pow(z,count);
        sum=sum+m;
        y/=10;
        count--;
    }
    if(sum==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}