//
//��Ŀ���� Description
//
//����n������n<=100���ҵ�������С������������
//�������� Input Description
//
//��һ��һ������n
//
//������һ��n��������ÿ������������231 -1
//������� Output Description
//
//��С��������
//�������� Sample Input
//
//4
//
//1 2 3 4
//������� Sample Output
//
//1 4
#include<stdio.h>
int main(){
	int i;
	int b[32];
	int a,max,min,tmp;
	int j,k,n;
	printf("����Ҫ���뼸�����֣�");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&tmp);
		b[i] = tmp; 
	}
	//ѭ���Ƚ���������ֵ��С ��j���鳤�� 
	for(j=0;j<a;j++){
	//n���鳤��-1-��ǰj�Ĵ�С	
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
