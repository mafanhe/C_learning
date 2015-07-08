//判断素数
#include <stdio.h>
#include "math.h"
int main(){
  int num=0;
  int i;
  scanf("%d",&num );
  if(num%2==0 && num!=2)printf("not prime\n");
  else{
    for(i=2;i<(int)sqrt(num);i++){
      if((num%i)==0) break;
    }
    if(i>=(int)sqrt(num) && num>=2) printf("is prime\n");
    else printf("not prime\n");
  }

	return 0;
}

