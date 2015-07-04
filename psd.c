//Positive sequence decomposition
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
  int num=0;
  scanf("%d",&num);
  int digit;
  int count=Count(num);
  int mask=pow(10,--count);
  do{
    digit=num/mask;
    num%=mask;
    mask/=10;
    printf("%d ",digit);
  }while(mask>0);
  return 0;
}
