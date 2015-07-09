#include <stdio.h>
void swap(int *pa,int *pb);

int main(int argc, char const *argv[]) {
  int a=5,b=6;
  printf("a=%d b=%d\n",a,b );
  swap(&a,&b);
  printf("a=%d b=%d\n",a,b );
  return 0;
}
void swap(int *pa,int *pb){
  int t=*pa;
  *pa=*pb;
  *pb=t;
}
