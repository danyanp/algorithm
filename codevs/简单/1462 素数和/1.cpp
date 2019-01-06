#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int sum=0;
	int a,b;
	cin >> a;
	cin >> b;
	if(a>b){
		int tep = a;
		a = b;
		b = tep;
	}
	for(int i=a;i<b;i++){
		if(i==1){
			sum = 2;
		}
		for(int n=2;n<i;n++){
			
			
			if(i%n==0){
				//sum = sum + i;
				break;
			}
			
			if(i%n!=0&&n>sqrt(i)){
				cout << i << endl;
				sum = sum + i;
				break;
			}
			
		}
		
	}
	cout << sum << endl;
	return 0;
} 
