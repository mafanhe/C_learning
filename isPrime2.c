//通过已有素数表来判断是否为素数并将新素数加入表中
//获取100个素数
#include <stdio.h>
#include "math.h"
int isPrime(int x,int knownPrimes[],int numberOfPrimes){
  int ret =1;
  for(int i=0;i<numberOfPrimes;i++){
    if(x%knownPrimes[i]==0){
      ret=0;
      break;
    }
  }
  return ret;
}
int main(){
  const int number=100;//定义常量number
  int prime[number]={2};//初始化prime数组
  int count=1;//数组计数器
  int i=3;//从3开始判断素数
  while(count<number){
    if(isPrime(i,prime,count)){//通过已有素数表来判断是否为素数
      prime[count++]=i;//若为素数，则加入素数表
    }
    i++;
  }
  for(i=0;i<number;i++){
    printf("%d ",prime[i] );
  }

	return 0;
}
