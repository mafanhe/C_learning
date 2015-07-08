/*
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。
现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
     n=axbxcxd
或
     n=n
所有的符号之间都没有空格，x是小写字母x。

输入样例：
18
输出样例：
18=2x3x3
*/
#include <stdio.h>
int isprime(int num){
  int i;
  for(i=2;i<=num/2;i++){
    if(num%i==0)break;
  }
  if(i<=num/2) return 0;
  else return 1;
}
void fenjie(int num){
  printf("%d=",num );
  while(num!=1){
    if (isprime(num)){printf("%d\n",num );break;}
    else if(num%2==0){num/=2;printf("2*");}
    else if(num%3==0){num/=3;printf("3*");}
    else if(num%5==0){num/=5;printf("5*" );}
  }
}

int main(){
  //printf("%d\n",isprime(2) );
  int num;
  scanf("%d",&num);
  fenjie(num);
  return 0;
}

