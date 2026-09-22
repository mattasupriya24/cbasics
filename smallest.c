#include <stdio.h>
int main(){
    int a,b,c;
    a=24;
    b=16;
    c=26;
    printf("given num: %d,%d,%d\n" ,a,b,c);
    if(a <=b && a <= c){
        printf("smallest num = %d\n" ,a);
    }
    else if(b <= a && b <= c)
    {
        printf("smallest num = %d\n" ,b);
    }
    else{
        printf("smallest num = %d\n" ,c);
    }
    return 0;
}