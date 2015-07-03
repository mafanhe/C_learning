/*表达式*/
#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	int t;
	printf("请输入两个hour,minute");
	scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
	t=(hour1-hour2)*60+minute1-minute2;
	printf("时间差为%d小时%d分钟"，t/60,t%60);
	return 0;
}
