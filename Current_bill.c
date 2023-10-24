#include<stdio.h>
int main()
{
    int units;
    float cpu,bill,sur=0,tot;
    scanf("%d",&units);
    if(units<=199)
    {
        cpu=1.20;
    }
    else if(units>=200&&units<400)
    {
        cpu=1.50;
    }
    else if(units>=400&&units<600)
    {
        cpu=1.80;
    }
    else
    {
        cpu=2.00;
    }
    bill=units*cpu;
    if(bill>400)
    {
        sur=0.15*bill;
    }
    else
    {
       sur=100;
    }
    tot=bill+sur;
    printf("%.2f",tot);
}