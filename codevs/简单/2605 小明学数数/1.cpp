//xor��������ÿ�����ֳ��ֵĴ���ֻ��һ��Ϊ������ 
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
		
		cout << "����ǰ:"; 
        cout << x << "^" << a <<endl;
        x = x^a;
       	cout << "�����:"; 
        cout << x <<endl;
       
    }
    cout << x ;
    return 0;
}
