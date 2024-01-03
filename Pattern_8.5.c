#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=64;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i+j==a+1 || i==j){
                char ch=b+i;
                printf("%c",ch);
            }
            else {
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}