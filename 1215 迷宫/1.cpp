#include<iostream>
//��N*N���Թ��ڣ���#��Ϊǽ����.��Ϊ·����s��Ϊ��㣬��e��Ϊ�յ㣬
//һ��4����������ߡ�
//�����Ͻǣ�(0,0)��s����λ�ô��ߵ����½ǣ�(n-1,n-1)��e����λ�ô���
//������ͨ�����YES���������������NO��
using namespace std;
int n,emin=99999;
int book[100][100];
char a[100][100];
int flag=0;
void dfs(int x,int y,int step){
	int tx,ty,k;
	int next[4][2] = {
					  {0,1},//�� 
					  {1,0},//�� 
					  {0,-1},//�� 
					  {-1,0}//�� 
					 };
	if(a[x][y]=='e'){
		flag = 1; 
		return;
	}
	for(k=0;k<=3;k++){
		tx = x + next[k][0];
		ty = y + next[k][1];
		//�ж��Ƿ���� 
		if(tx<=-1||tx>n-1||ty<=-1||ty>n-1){
			continue;
		}
		if(book[tx][ty]==0&&a[tx][ty]!='#'){
			book[tx][ty] = 1;
			dfs(tx,ty,step+1);
			book[tx][ty] = 0;
		}
	} 
	return ;
}
int main(){
	int m;
	cin >> m;
	while(m--){
		cin >> n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];	
			}
		}
		dfs(0,0,0);		
		if(flag==0){
		cout <<"NO"<<endl;
		}else{
		cout <<"YES"<<endl;
	} 
	}


	return 0;
}
