#include<iostream>
#include<stdio.h>
#define H 3
#define W 3
using namespace std;
char a[H][W];
int book[H][W]={0};
int count=0;
int dfs(int x,int y){
	++count;
	int tx,ty,k;
	int next[4][2] = {
						{1,0},
						{0,1},
						{-1,0},
						{0,-1}
					};
	for(k=0;k<=3;k++){
		tx = x + next[k][0];
		ty = y + next[k][1];
		//判断是否出界 
		if(tx<=-1||ty<=-1||tx>=W||ty>=H){
			continue;
		}
		if(a[tx][ty]!='#'&&a[tx][ty]=='.'){
			book[tx][ty]=count;
			dfs(tx,ty);
		} 
	} 
}
int main(){
	//行，列 
	int n,m;
	//cin >> n >> m;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++)
		{
			cin >> a[i][j];
			if(a[i][j]=='#'){
				book[i][j]=1;
			}
			if(a[i][j]=='@'){
				n = i;
				m = j;
			}
		}
	} 
	dfs(n,m);
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++)
		{
			cout << book[i][j];
		}
		cout << endl;
	} 
	cout << count<< endl;
	return 0;	
} 
