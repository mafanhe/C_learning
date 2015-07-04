//guess number ganme
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int num=rand()%100+1;
	int guess=0;
	int count=0;
	printf("please write the number you guess");
	scanf("%d",&guess);
	while(guess!=-1){
		count++;
		if(guess==num) {
			printf("you got it use%d time\n",count);
			break;
		}
		else if(guess>num) printf("sorry too big\n");
		else printf("sorry too small\n");
		scanf("%d",&guess);
	}
	return 0;
}
