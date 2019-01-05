#include<iostream>
using namespace std;

int dfs(int n){
	int count;
	if(n%10==0){
		count++;
		dfs(n/10);	
	}
} 
int f1(long long n){
	if(n==1){
		return n;	
	}
	n=n*f1(n-1);
}
int f2(long long n){
        // write your code here
        long count = 0;
        long temp=n/5;
        while (temp!=0) {
            count+=temp;
            temp/=5;
        }
        return count;
}

int main(){
	long long n;
	cin >> n;
	cout << f2(n);
	return 0;
} 
