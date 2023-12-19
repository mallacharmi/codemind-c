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
    int se,count=0;
    scanf("%d",&se);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            count++;
        }
    }
    printf("%d",count);
}