#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100];
    scanf("%[^
]",s);
    int i;
    for(i=0;s[i];i++)
    {
        s[i]=tolower(s[i]);
    }
    printf("%s",s);
}