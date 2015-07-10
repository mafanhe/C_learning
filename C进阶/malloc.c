/**
动态分配数组
分配后记得free
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int number;
  int *a;
  scanf("%d\n",&number );
  //int a[number];
  a=(int*)malloc(number*sizeof(int));
  free(a);
  return 0;
}
