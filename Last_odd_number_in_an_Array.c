#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int a;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)a=arr[i];
    }
    printf("%d",a);
}