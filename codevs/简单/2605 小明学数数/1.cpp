//xor算数据中每个数字出现的次数只有一个为奇数次 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,a,x=0;
    cin>>n;

    for (i=1;i<=n;i++)
    {
        cin>>a; 
		
		cout << "运算前:"; 
        cout << x << "^" << a <<endl;
        x = x^a;
       	cout << "运算后:"; 
        cout << x <<endl;
       
    }
    cout << x ;
    return 0;
}
