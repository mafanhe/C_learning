//goto 跳出多重循环
#include<stdio.h>
int main(){
  int one,two,three;
  int x=2;
  for(int i=1;i<=x*10;i++){
    for(int j=1;j<x*10/2;j++){
      for(int k=1;k<x*10/5;k++){
        if(i+j*2+k*5==x*10)
        {
          printf("%dnoe %dtwo %dfive can be 2 yuan\n",i,j,k );
          goto out;
        }
      }
    }
  }
  out:
	return 0;
}
