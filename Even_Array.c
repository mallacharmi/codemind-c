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
    int c=0;
    for(i=0;i<n;i++)
    {
       if(arr[i]%2==1)
       {
           c=1;
           break;
       }
    }
    if(c==0)printf("True");
    else printf("False");
}