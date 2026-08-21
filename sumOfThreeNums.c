#include<stdio.h>
int main(){
    double a,b,c,d;
    printf("enter any three numbers\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=a+b+c;
    printf("%.2lf %c %.2lf %c %.2lf = %.2lf",a,'+',b,'+',c,d);
}
