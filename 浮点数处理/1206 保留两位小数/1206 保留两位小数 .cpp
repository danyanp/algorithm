//
//题目描述 Description
//
//保留两位小数输出一个浮点数。
//输入描述 Input Description
//
//一个浮点数。double范围内
//输出描述 Output Description
//
//保留两位小数输出
//样例输入 Sample Input
//
//11
//样例输出 Sample Output
//
//11.00
#include<stdio.h>
int main(){
	double a; 
	scanf("%lf",&a);
	printf("%.2lf",a);
	return 0;
} 

