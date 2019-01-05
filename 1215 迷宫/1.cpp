#include<iostream>
//在N*N的迷宫内，“#”为墙，“.”为路，“s”为起点，“e”为终点，
//一共4个方向可以走。
//从左上角（(0,0)“s”）位置处走到右下角（(n-1,n-1)“e”）位置处，
//可以走通则输出YES，不可以走则输出NO。
using namespace std;
int n,emin=99999;
int book[100][100];
char a[100][100];
int flag=0;
void dfs(int x,int y,int step){
	int tx,ty,k;
	int next[4][2] = {
					  {0,1},//右 
					  {1,0},//下 
					  {0,-1},//左 
					  {-1,0}//上 
					 };
	if(a[x][y]=='e'){
		flag = 1; 
		return;
	}
	for(k=0;k<=3;k++){
		tx = x + next[k][0];
		ty = y + next[k][1];
		//判断是否出界 
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
