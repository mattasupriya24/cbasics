#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    printf("enter two numbers\n");
    scanf("%lf %lf",&a,&b);
    c=pow(a,b);
    printf("%.2lf ^ %.2lf = %.2lf",a,b,c);
    return 0;
}