//计算平均数
#include <stdio.h>
int main(){
	int number;
	int count;
	int sum;
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	printf("%f\n",1.0*sum/count );
	return 0;
}
