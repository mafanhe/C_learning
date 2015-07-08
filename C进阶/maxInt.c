#include <stdio.h>
int main() {
  int a=0;
  int b=0;
  //unsigned int a=0;

  while(++a>0);
  printf("int数据类型的最大数为%d\n",--a );
  b++;
  while ((a=a/10)!=0) {
    b++;
  }
  printf("int数据类型的最大位数为%d\n",b );
  printf("unsigned int的最大数%u",-1);
  return 0;
}
