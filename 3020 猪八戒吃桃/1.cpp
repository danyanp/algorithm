#include<iostream>
using namespace std;
int main(){
	//�޷��Ű汾���з��Ű汾����������޷��������ܱ���
	//2�����з������͵����������ݡ�
	//longint��Ϊ���������ݣ���һ���������ͣ�
	//���ķ�Χ��-2147483648��2147483647
	//��long long���ڴ�ռ�˸��ֽڣ� 
	//��Χ��-922337203685775808~922337203685775807
	unsigned long long int n,m;
	int a[100];
	int i;
	cin >> n;
	cin >> m;
	for(i=0;i<m;i++){
		cin >> a[i];
	}
	i = 0;
	while(n!=0&&i<m){
		n=n-a[i];
		n=2*n;
		i++;
	}
	if(i<m){
		cout <<"-"<< i <<endl;
	}else{
		cout << n << endl;
	}
	return 0;
} 
