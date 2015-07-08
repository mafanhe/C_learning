/*
题目内容：
给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），在该位置上的元素是第i行上的最大数，第j列上的最小数。一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。

输入格式:
输入的第1行是一个正整数n, （1<=n<=100），然后有n行，每一行有n个整数，同一行上两个整数之间有一个或多个空格。

输出格式：
对输入的矩阵，如果找到鞍点，就输出其下标。下标为两个数字，第一个数字是行号，第二个数字是列号，均从0开始计数。
如果找不到，就输出
NO
题目所给的数据保证了不会出现多个鞍点。

输入样例：

4

1 7 4 1

4 8 3 6

1 6 1 2

0 7 8 9


输出样例：
2 1
*/
#include <stdio.h>
int main() {
  int num,i,j,a;
  scanf("%d",&num );
  int matrix[num][num];
  //init matrix
  for(i=0;i<num;i++){
    for (j = 0; j<num; j++)
    {
      scanf("%d",&a);
      matrix[i][j]=a;
    }
  }

  for(i=0;i<num;i++){
    int maxX=0,maxY=0,y=1;
    for(j=0;j<num;j++){
      if(matrix[i][j]>matrix[maxX][maxY]){maxX=i;maxY=j;}//find the max line
      //if(matrix[j][i]<matrix[minX][minY]){minX=j;minY=i;}//find the min column
    }
    printf("max(%d %d)\n",maxX,maxY );
    for(j=0;j<num;j++){
      if(matrix[maxX][maxY]>matrix[j][maxY]){y=0;}//judge the max line is the min column
      //if(matrix[minX][minY]<matrix[minX][j])x=0;
    }
    if(y==1)printf("鞍点：%d %d\n",maxX,maxY );//if is print
  }

  return 0;
}
