//题目描述 Description
//给出一个英语句子，希望你把句子里的单词顺序都翻转过来
//输入描述 Input Description
//输入包括一个英语句子。
//输出描述 Output Description
//按单词的顺序把单词倒序输出
//样例输入 Sample Input
//I love you
//样例输出 Sample Output
//you love I
#include<stdio.h>
#include<string.h>
int main(){
char a[100];
	int i,j,r,q;
		gets(a);
		j=strlen(a)-1;
		r=0;
	for(i=strlen(a)-1;i>=0;i--){
		if(a[i]==' '){
			r=i;
				for (q=r+1;q<=j;q++)
					printf("%c",a[q]);
					printf(" ");
					j=r-1;
					}
				}
		for (q=0;q<r;q++)
			printf("%c",a[q]);
			return 0;
}
