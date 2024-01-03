#include<stdio.h>
int main()
{
    int n,i,add=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            add=add+i;
        }
    }
    if(add==n)
    {
        printf("PERFECT");
    }
    else if(add<n)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}