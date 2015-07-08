/*
题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：

    yi er san si

注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：

    fu er san si yi

输入样例：
-30
输出样例：
fu san ling
*/
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
void pyin(int digit){
  switch(digit){
    case 0:
      printf( "ling ");
      break;
    case 1:
        printf("yi ");
        break;
    case 2:
        printf("er ");
        break;
    case 3:
        printf ("san ");
        break;
    case 4:
        printf( "si ");
        break;
    case 5:
        printf ("wu ");
        break;
    case 6:
        printf( "liu ");
        break;
    case 7:
        printf( "qi ");
        break;
    case 8:
        printf( "ba ");
        break;
    case 9:
      printf( "jiu ");
      break;
    }
}
int main() {
  int num=0;
  scanf("%d",&num);
  if(num<0){
      num=-num;
      printf("fu " );
  }
  int digit;
  int count=Count(num);
  int mask=pow(10,--count);
  do{
    digit=num/mask;
    num%=mask;
    mask/=10;
    pyin(digit);
  }while(mask>0);
  return 0;
}
