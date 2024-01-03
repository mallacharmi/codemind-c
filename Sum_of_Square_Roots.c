#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,x=0;
    scanf("%f%f",&a,&b);
    for(int i=a;i<=b;i++)
    {
        x+=pow(i,0.5);
    }
    printf("%.2f",x);
}