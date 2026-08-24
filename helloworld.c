#include <stdio.h>
int main(){
    int n,q;
    printf("enter n value:");
    scanf("%d", &n);
    q=n/2;
    if (q*2==n)
{
    printf("even");
}
else
{
    printf("odd");
}
    return 0;
}