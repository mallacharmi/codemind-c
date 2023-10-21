#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    if(X<=1*A+2*B)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}