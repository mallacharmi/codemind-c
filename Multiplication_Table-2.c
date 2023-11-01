#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&b,&a);
    for(i=1;i<=a;i++)
    {
        printf("%d x %d = %d
",b,i,b*i);
    }
}