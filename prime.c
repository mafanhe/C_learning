//判断素数
#include<stdio.h>
int main(){
  int num=0;
  int i;
  scanf("%d",&num );
  for(i=2;i<num/2;i++){
    if((num%i)==0) break;
  }
  if(i>=num/2&num>=2) printf("is prime\n");
  else printf("not prime\n");

	return 0;
}
