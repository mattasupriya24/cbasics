#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("%d %c %d = %d",a,'+',b,a+b);
    return 0;
}