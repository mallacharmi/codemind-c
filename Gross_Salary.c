#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    float da,hra,gross;
    if(x<=10000)
    {
        da=x*0.8;
        hra=x*0.2;
    }
    else if(x<=20000)
    {
        da=x*0.9;
        hra=x*0.25;
    }
    else
    {
     da=x*0.95;
     hra=x*0.3;
    }
    gross=x+da+hra;
    printf("%.2f",gross);
}