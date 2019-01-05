#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution {
    private:
        stack<char> a;
    public:
    	bool isCheck(char a,char b){
            if(a=='{'&&b=='}'){
                return true;
            }else if(a=='('&&b==')'){
                return true;
            }else if(a=='['&&b==']'){
                return true;
            }else{
            	return false;
            }
        }
        bool isValid(string s) {
            for(int i=0;i<s.size();i++){
            	if(a.empty()){
            		cout << "add one"<<endl;
					a.push(s[i]);
            	}else{
            		cout << "company" <<endl;
            		if(isCheck(a.top(),s[i])){
            			cout << "dis:"<<a.top()<<s[i]<<endl;
						a.pop();
            		}else{
            			cout << "add:"<<s[i]<<endl;
            			a.push(s[i]);
            		}
            	}
            }
            if(a.empty()){
            	cout <<"zheng"<<endl;
            	return true;
            }else{
            	cout <<"jia"<<endl;
            	return false;
            }
        }

};
int main(){
    Solution s;
    string a = "{[]} ";
    cout << s.isValid(a) <<endl;
    return 0;
}
