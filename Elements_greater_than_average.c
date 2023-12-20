#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int count=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int average=sum/n;
    //reading//
    for(i=0;i<n;i++)
    {
        if(arr[i]>=average)count++;
    }
    printf("%d",count);
}