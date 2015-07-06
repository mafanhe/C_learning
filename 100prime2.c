//利用素数的倍数来排除非素数来构造100以内的素数
#include <stdio.h>
int main(){
  const int num=100;
  int isprime[num];//计算100以内的素数
  for(int i=0;i<num;i++){
    isprime[i]=1;
  }
  printf("%d\n",isprime[0] );
  for(int i=2;i<num;i++){
    if(isprime[i]){
      for(int j=2;i*j<num;j++) isprime[i*j]=0;
    }
  }

  for(int i=2;i<num;i++){
    if(isprime[i]) printf("%d\t",i );
  }
  return 0;
}
