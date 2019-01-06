#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int b;
	int c;
	int min=99999;
	
	cin >> n;
	b = sqrt(n);
	for(int i=2;i<=b;i++){
		if(n%i==0){
			min = i;
			if(min<i){
				min = i;
			}
		}
	}
	c = n / min;
 	cout << c << endl;
	return 0;
} 
