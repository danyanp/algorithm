//��Ŀ���� Description
//����һ��Ӣ����ӣ�ϣ����Ѿ�����ĵ���˳�򶼷�ת����
//�������� Input Description
//�������һ��Ӣ����ӡ�
//������� Output Description
//�����ʵ�˳��ѵ��ʵ������
//�������� Sample Input
//I love you
//������� Sample Output
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
