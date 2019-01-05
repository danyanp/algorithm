#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs){
        int len = strs[0].size();
        int i;
        string rev;
        for(int j=0;j<len;j++){
            for(i=0;i<strs.size()-1;i++){
                if(strs[i][j]!=strs[i+1][j]){
                   if(rev.size()==0){
                   		return 0;
                   }else{
                   		return rev;
                   }
                }
            }
            string c(1,strs[i][j]);
            rev.append(c); 
        }
        return rev;
    
    }
    void print(vector<string> &a){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout<<"锟斤拷始"<<endl;
    vector<string> a;
    a.push_back("abc");
    a.push_back("abc");
    a.push_back("abc");
    a.push_back("a");
    //s.print(a);
    string b = s.longestCommonPrefix(a);
    cout << b;
    return 0;
}
