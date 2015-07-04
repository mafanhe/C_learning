//逆序数字
#include <stdio.h>
int main(){
  int num;
  int result=0;
  scanf("%d",&num);
  while(num>0){
    int digit=num%10;
    printf("%d",digit);
    num/=10;
    result=result*10+digit;
  }
  //printf("%d\n" ,result); //去除零
  return 0;
}
