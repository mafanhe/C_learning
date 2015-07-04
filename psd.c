//Positive sequence decomposition正序单个输出整数数字
#include "stdio.h"
#include <math.h>
int Count(int num){
  int count=0;
  while(num!=0){
    count++;
    num/=10;
  }
  return count;
}
int main() {
  int num=1234567 ;
  int digit;
  int count=Count(num);
  int mask=pow(10,--count);
  for(int i=0;i<=count;i++){
    digit=num/mask;
    num%=mask;
    mask/=10;
    printf("%d ",digit);
  }
  return 0;
}
