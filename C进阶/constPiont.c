#include <stdio.h>
int main(int argc, char const *argv[]) {
  //表示一旦的但了某个变量的地址，不能再指向其他变量
  int * const p=&i;//p是const
  *p=26;//ok
  p++;//error指针地址不能该

  const int* p=&i;//*p是const
  *p=26;//error!//不能通过指针对p所指向的值进行修改
  i=26;//ok
  p=&j;//ok
  return 0;
}
