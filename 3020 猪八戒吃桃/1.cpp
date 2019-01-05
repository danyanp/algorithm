#include<iostream>
using namespace std;
int main(){
	//无符号版本和有符号版本的区别就是无符号类型能保存
	//2倍于有符号类型的正整数数据。
	//longint即为长整型数据，是一种数据类型，
	//它的范围是-2147483648至2147483647
	//而long long在内存占八个字节， 
	//范围是-922337203685775808~922337203685775807
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
