//
//题目描述 Description
//
//求n个数的和
//输入描述 Input Description
//
//第一行一个整数n
//
//接下来一行n个整数
//输出描述 Output Description
//
//所有数的和
//样例输入 Sample Input
//
//4
//
//1 2 3 4
//样例输出 Sample Output
//
//10
//数据范围及提示 Data Size & Hint
//
//n<=100
//
//所有数的和<=231-1
#include<stdio.h>
int main() {
	int a,tmp,sum,i;
	int b[32];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&tmp);
		b[i] = tmp;
	}	
	sum = 0;
	for(i=0;i<a;i++){
		sum = sum +b[i];
	}	
	printf("%d",sum);
	
}
