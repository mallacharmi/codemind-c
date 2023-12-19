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
    int c=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2==1)
        {
            c=0;
            break;
        }
    }
    if(c==1)printf("True");
    else printf("False");
}