#include<stdio.h>
int is_prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int rev(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int get_next_prime_palindrome(int n)
{
    while(1)
    {
        if(n==rev(n) && is_prime(n))
        {
            break;
        }
        else
        {
            n++;
        }
    }
    return n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",get_next_prime_palindrome(n+1));
}