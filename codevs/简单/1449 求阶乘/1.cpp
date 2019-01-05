#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int j = s[s.size()-1];
    if(j%2==0){
        cout << "ou";
    }else{
        cout << "ji";
    }
    return 0;
}
