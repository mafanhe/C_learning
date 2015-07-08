/*
题目内容：

对数字求特征值是常用的编码算法，奇偶特征是一种简单的特征值。对于一个整数，
从个位开始对每一位数字编号，个位是1号，十位是2号，以此类推。这个整数在第n位上的数字记作x，
如果x和n的奇偶性相同，则记下一个1，否则记下一个0。按照整数的顺序把对应位的表示奇偶性的0和1都记录下来，
就形成了一个二进制数字。比如，对于342315，这个二进制数字就是001101。


输入样例：

342315


输出样例：

13
*/
#include "stdio.h"
#include <math.h>
//判断位数
int Count(int num){
  int count=0;
  while(num>0){
    count++;
    num/=10;
  }
  //printf("%d\n",count);
  return count;
}
//判断基偶
int ou(int num){
  if(num%2==0)return 1;
  else return 0;
}
int main() {
  int num=0;
  scanf("%d",&num);
  int digit;
  int count=Count(num);
  int result;
  int mask=pow(10,count)/10;
  do{
    digit=num/mask;
    num%=mask;
    mask/=10;
    if(ou(count)==ou(digit)) result+=pow(2,count)/2;
    //printf("count %d mask %d result %d digit%d\n",count,mask,result,digit);
    count--;
  }while(mask>0);
  printf("%d\n",result );
  return 0;
}
