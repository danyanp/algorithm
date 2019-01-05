#include<iostream>
using namespace std;
typedef struct tree{
	int l;
	int r;
}tree;
tree t[17];
void preprint(int num){
	if(num==0) return;
	cout<<num<<" ";
	preprint(t[num].l);
	preprint(t[num].r);
}
void prprint(int num){
	if(num==0) return;
	prprint(t[num].l);
	cout<<num<<" ";
	prprint(t[num].r);
}
void pprint(int num){
	if(num==0) return;
	pprint(t[num].l);
	pprint(t[num].r);
	cout<<num<<" ";
}
int main(){
	int n;
	cin >> n;
	for(int i=1; i <= n; ++i)
	{
		int L,R;
		cin >> L >> R;
		t[i].l=L;
		t[i].r=R; 
	}
	preprint(1);cout<<endl; 
	prprint(1);cout<<endl; 
	pprint(1);cout<<endl; 
	return 0;
} 
