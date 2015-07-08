/*
题目内容：
你的程序要读入一行文本，其中以空格分隔为若干个单词，以‘.’结束。你要输出这行文本中每个单词的长度。这里的单词与语言无关，可以包括各种符号，比如“it's”算一个单词，长度为4。注意，行中可能出现连续的空格。

输入格式:
输入在一行中给出一行文本，以‘.’结束，结尾的句号不能计算在最后一个单词的长度内。
输出格式：
在一行中输出这行文本对应的单词的长度，每个长度之间以空格隔开，行末没有最后的空格。

输入样例：
It's great to see you here.
输出样例：
4 5 2 3 3 4
*/
#include <stdio.h>
#include<string.h>
int main(){
	//定义一个char数组并初始化
	const int number=10;
	char str[number];
	for (int i = 0; i < number; i++) {
		str[i]=' ';
	}
	//定义i表示单词大小
	int i=0;
	//循环输入并计数
	while(scanf("%s",str)){
		i=0;
		if(str[0]=='.')break;
		for(int j=0;j<number;j++){
			if(str[j]!=' ')i++;
		}
		//输出单词大小
		printf("%d ", --i);
		//重新初始化str
		for (int i = 0; i < number; i++) {
			str[i]=' ';
		}

}
	return 0;
}
