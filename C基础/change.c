/*
变量
*/
#include<stdio.h>
int main(){
	int price = 0;
	printf("请输入价格");
	scanf("%d",&price);
	printf("请输入两个数字");
	int a ,b;
	scanf("%d %d",&a,&b);
	printf("%d+%d=%d",a,b,a+b);
	const int AMOUNT=100;
	int change =AMOUNT-price;
	printf("找你%d元\n",change);
	return 0;
}
