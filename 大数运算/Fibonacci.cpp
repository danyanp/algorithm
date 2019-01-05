#include<iostream>
using namespace std;
int fibonacci(int n){
    if (n == 1 || n == 2) {
      return 1;
    }else{
      return fibonacci(n - 1)+fibonacci(n - 2);
    }
}
int main(){
  float i;

  // i = fibonacci(3) / fibonacci(4);
  //  cout << i << endl;

  return 0;
}