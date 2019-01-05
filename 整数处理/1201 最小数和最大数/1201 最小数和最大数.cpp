//
//题目描述 Description
//
//输入n个数，n<=100，找到其中最小的数和最大的数
//输入描述 Input Description
//
//第一行一个整数n
//
//接下来一行n个整数，每个整数不超过231 -1
//输出描述 Output Description
//
//最小和最大的数
//样例输入 Sample Input
//
//4
//
//1 2 3 4
//样例输出 Sample Output
//
//1 4
#include<stdio.h>
int main(){
	int i;
	int b[32];
	int a,max,min,tmp;
	int j,k,n;
	printf("你需要输入几个数字：");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&tmp);
		b[i] = tmp; 
	}
	//循环比较数组内数值大小 ，j数组长度 
	for(j=0;j<a;j++){
	//n数组长度-1-当前j的大小	
	for(n=0;n<a-j-1;n++){
		
		if(b[n]>b[n+1]){
			k = b[n];
			b[n] = b[n+1];
			b[n+1] = k;	
 		}
	 }
	}

	printf("%d %d",b[0],b[a-1]);
			 
}
//#include <stdio.h>
//		
//		int main (void )
//		{
//		
//	 		int n,max=-1,min=2147000000,tmp=0,i;
//		
//			scanf("%d",&n);
//			
//			for(i=0;i<n;i++)
//			
//			{
//				scanf("%d",&tmp);
//		
//				if(tmp>max)max=tmp;
//		
//				if(tmp<min)min=tmp;}
//		
//				printf("%d %d",min,max);
//		
//				return 0;
//		
//		}
