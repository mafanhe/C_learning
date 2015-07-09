/*
指针应用1：返回多值
*/
#include "stdio.h"
void minmax(int a[],int len,int *min,int*max);
int main(int argc, char const *argv[]) {
  int a[]={1,2,3,4,5,6,8,9,11};
  int min,max;
  minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
  printf("min=%d max=%d",min,max );
  return 0;
}
void minmax(int a[],int len,int *min,int*max){
  *min=*max=a[0];
  for (int i = 0; i < len; i++) {
    if(a[i]>*max)*max=a[i];
    if(a[i]<*min)*min=a[i];
  }
}
