#include<stdio.h>
int main()
{
    int n,r,fd,ld,sum;
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
      n/=10;  
    }
    fd=n;
    sum=fd+ld;
    printf("%d",sum);
}