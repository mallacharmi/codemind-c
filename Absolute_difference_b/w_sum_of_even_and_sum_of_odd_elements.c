#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)sum1+=arr[i];
        else sum2+=arr[i];
    }
    int diffe=(sum1-sum2);
    int d=(sum2-sum1);
    if(diffe>0)
    {
        printf("%d",diffe);
    }
    else
    {
        printf("%d",d);
    }
}