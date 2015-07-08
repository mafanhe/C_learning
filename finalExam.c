/*
题目内容：

你的程序要读入一篇英文文章，然后统计其中的单词数来输出。需要统计的数据为：

    总的单词数量；

    含有1个字母到10个字母的单词的数量。

单词和单词的间隔是由以下标点符号形成的：空格、tab、回车换行、逗号、句号、问号、括号、双引号和冒号。这些符号不能被计入单词的长度中。


因此，对于下面的句子：

    "What you see is a very hefty response," said CNN Aviation Correspondent Rene Marsh.

其中的单词为：

    What you see is a very hefty response said CNN Aviation Correspondent Rene Marsh

共14个。注意虽然这里的response,"后面跟了空格，我们并不能保证所有的输入中都会有这样规矩的空格。


单引号（表示缩写的'）和连字号（-）视做单词的一部分，所以“he's”是一个单词，长度为4；而“F-16 fighter jets”是三个单词。为了你的程序的方便，输入数据中不会出现两个连续的连字号。


输入格式:

一篇英文文章。

如何知道输入结束了？

    如果使用scanf，它会返回这次读到了几个变量的值，当这个值小于你要求读的变量的数量时，表示输入结束了；

    如果使用getchar，它在输入结束时返回EOF。


输出格式：

十一个数字，依次是单词数量和含有1到10个字母的单词的数量，以空格分隔，最后不含空格。


输入样例：

F-16 fighter jets escorted two passenger planes into Atlanta's Hartsfield-Jackson International Airport on Saturday after a bomb threat made on Twitter was deemed credible, according to military officials.

Southwest Airlines Flight 2492 and Delta Flight 1156 landed safely at the airport and were searched by bomb disposal units, according to airline officials. Nothing out of the ordinary was found, officials said.

Delta spokesman Morgan Durant said, "It was a Portland, Oregon, to Atlanta, Georgia, flight. Delta is supporting the sweeping process carried out by authorities."


输出样例：

85 2 11 11 11 6 11 10 10 9 1
*/

#include <stdio.h>
//初始化字符数组
void iniStr(char str[],int number){
  for (int i = 0; i < number; i++) {
    str[i]=' ';
  }
}
//判断是否为字母，是则返回1,否则返回0
int isWord(char c){
  switch (c) {
    case '\0': return 0;
    case '"': return 0;
    case ' ': return 0;
    case '\t': return 0;
    case '\n': return 0;
    case ',': return 0;
    case '.': return 0;
    case '?': return 0;
    case '(': return 0;
    case ')': return 0;
    case '\'': return 0;
    case ':': return 0;
    default :return 1;
  }
}
int main() {
  //定义并初始化数组
  const int NUMBER=11;
  char str[NUMBER];
  iniStr(str,NUMBER);
  //num数组存储单词的个数;
  int num[NUMBER]={0};
  //sum 记录单词的总数
  int sum=0;
  //循环输入ctrl+d结束输入。
  while(scanf("%s",str)){
    //printf("%s\n",str );
    if(str[0]=='#')break;
    int j=0;
    //循环并计算单词的词数
    for (int i = 0; i < NUMBER; i++) {
      if (isWord(str[i])) {
        j++;
      }
    }
    //记录单词总数与单次词数的个数
    sum++;
    num[j]++;
    iniStr(str,NUMBER);
  }
  //打印sum与个单词数的个数
  printf("%d ",sum);
  for (int i = 1; i < NUMBER; i++) {
      printf("%d ",num[i] );

  }
  return 0;
}
