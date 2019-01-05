#include<iostream>
#include<vector>
using namespace std;
int book[3][3]={0};
int book2[3][3]={0};
vector<vector<int> > a(3, vector<int>(3));
class Solution
{
  public:
    vector<vector<int> > updateMatrix(vector<vector<int> > &matrix)
    {
        int print(vector<vector<int> > &a);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if(book[i][j]==1){
                    dfs(i,j,0);
                }
            }
        }
        print(matrix);
    }

    int dfs(int x,int y,int step){
        int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
        //为1
        //找零
        int tx,ty,k;
        for(k=0;k<=3;k++){
            tx = x + dir[k][0];
            ty = y + dir[k][1];
            if(tx<=-1||ty<=-1||tx>3||ty>3){//判断出界
                continue;
            }
            if(a[tx][ty]==0){//停止搜索条件，找到0
                a[tx][ty]=step;
                return 0;                
            }
            if(book2[tx][ty]!=1){
                if(a[tx][ty]!=0){
                    book2[tx][ty]=1;
                    dfs(tx,ty,step+1);
                    book2[tx][ty]=0;
                }else{
                    a[tx][ty]=step;
                }
            }
            return 0;
        }
        //找到
            //标记step(step=四周+1)
        //找不到
            //dfs
        //下一个
        //return 0；

    }
    
};
int print(vector<vector<int> > &a)//打印矩阵
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(int argc, char const *argv[])
{
    int b[3][3] = {{0,0,0},{0,1,0},{1,1,1}};//测试数据
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size();j++){
            a[i][j] = b[i][j];
            //如果数值为一，则标记为一
            if(a[i][j]==1){
                book[i][j]=1;
            }
        }
    }
    Solution so;        //申明一个对象
    so.updateMatrix(a);//引用成员变量
    //print(a);

    return 0;
}
