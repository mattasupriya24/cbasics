#include <stdio.h>
int main (){
    int m1,m2,m3;
    printf("enter marks of sub1:");
    scanf("%d" ,&m1);
    printf("enter marks of sub2:");
    scanf("%d" ,&m2);
    printf("enter marks of sub3:");
    scanf("%d" ,&m3);
    if(m1 >= 85 && m2 >= 85 && m3 >= 85)
    {
        printf("result: PASS\n");
  }
  else
  {
    printf("result: FAIL\n");
  }
  return 0;
}
