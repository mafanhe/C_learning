/*
指针应用2：
函数函数返回运算状态，结果通过指针返回
*/
#include <stdio.h>
int divide(int a,int b,int *result);
int main(int argc, char const *argv[]) {
  int a=5,b=0,result;
//int a=5,b=2,result;
  if (divide(a,b,&result)) printf("%d/%d=%d\n",a,b,result );
  else printf("计算出错\n");
  return 0;
}
int divide(int a,int b,int *result){
  if (b==0) return 0;
  else{
    *result=a/b;
    return 1;
  }
}
