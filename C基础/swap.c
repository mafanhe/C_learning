#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d",&a,&b);
  printf("a=%d,b=%d",a,b);
  c=a;
  a=b;
  b=c;
  printf("swap:a=%d,b=%d",a,b);
  return 0;
}
