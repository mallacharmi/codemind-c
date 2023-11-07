#include<stdio.h>
int main()
{
    int n,i,rev=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        rev=rev+i;
    }
    printf("%d",rev);
}