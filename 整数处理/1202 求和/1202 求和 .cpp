//
//��Ŀ���� Description
//
//��n�����ĺ�
//�������� Input Description
//
//��һ��һ������n
//
//������һ��n������
//������� Output Description
//
//�������ĺ�
//�������� Sample Input
//
//4
//
//1 2 3 4
//������� Sample Output
//
//10
//���ݷ�Χ����ʾ Data Size & Hint
//
//n<=100
//
//�������ĺ�<=231-1
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
