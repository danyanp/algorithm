#include<iostream>
using namespace std;
int a[4],book[4];
void dfs(int step){
	
	if(step==4){
		cout << a[1] << a[2] << a[3] << endl;
		return;
	}
	for(int i=1;i<=3;i++){
		if(book[i]==0){
			a[step] = i;
			book[i] = 1;
			dfs(step+1);
			book[i] = 0;	
		}
	}
	return;
}

int main(){
	dfs(1);
	return 0;
}
