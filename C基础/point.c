/*int i=1;
int *p= &i;
p里是i的地址;
*p里是i的值;
数组是特殊的常量指针*/
#include<stdio.h>
int main(){
	int i=0;
	int *p=&i;
	printf("%d\n",*p);
	printf("%p\n",p);
	return 0;
}
