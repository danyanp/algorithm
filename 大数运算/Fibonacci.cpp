#include<stdio.h>
#include <time.h>    //用到clock()函数

#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n == 1 || n == 2) {
      return 1;
    }else{
      return fibonacci(n - 1)+fibonacci(n - 2);
    }
}
long fib(int n, long a, long b, int count)
{
  if (count == n) return b;
  return fib(n, b, a + b, ++count);
}

//一叉递归
long fib2(int n)
{
  return fib(n, 0, 1, 1);
}
//非递归方法O(n)
long fib3(int n)
{
  long x = 0, y = 1;
  for (int j = 1; j < n; j++)
  {
    y = x + y;
    x = y - x;
  }
  return y;
}
int main(){
  int begintime, endtime;
  //float i;

  // i = fibonacci(3) / fibonacci(4);
  //  cout << i << endl;
  begintime = clock();  //计时开始
  cout << fib3(45) << endl;
  endtime = clock();  //计时结束
  printf("\n\nRunning Time：%dms\n", endtime - begintime);
  return 0;
}