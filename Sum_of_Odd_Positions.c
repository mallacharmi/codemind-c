#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}