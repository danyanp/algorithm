#include <cstring>
#include <iostream>
#include <string>
using namespace std;
#define N 500 /*定义数组最大的维数*/
/*
函数名  ：TranChar2Int
函数功能：将字符数组转化为整型数组
入参    : 字符数组12300
出参    ：整型数组
返回值  ：无
strArr[i] - '0' 将acill转成字符
*/
void TranChar2Int(const char *strArr, int iArray[]) {
  int i, j, iLen = strlen(strArr);
  for (i = iLen - 1, j = 0; i >= 0; i--) {
    iArray[j++] = strArr[i] - '0';
  }
}
/*
函数名  ：TranInt2Char
函数功能：将整型数组转化为字符数组
入参    : 整型数组
出参    ：字符数组
返回值  ：无
*/
void TranInt2Char(int iArray[], char cArray[], int index) {
  int i, j;
  for (i = index, j = 0; i >= 0; i--) {
    cArray[j++] = iArray[i] + '0';
  }
}
/*
函数名  ：GetFirstNot0Index
函数功能：获取数组最后一位数的下标
入参    : 数组iResult[]与长度iLen
出参    ：无
返回值  ：数组最后一位数的下标
*/
int GetFirstNot0Index(int iResult[], int iLen) {
  int i;
  for (i = iLen - 1; i >= 0; --i) {
    if (iResult[i])  //找到最高位第一个不为0
    {
      return i;
    }
  }
  return 0;
}

/*
函数名  ：MultiplyBigNum
函数功能：大数据乘法
入参    : 数组cFirst[]与cSecond[]
出参    ：数组cResult[]
返回值  ：无
*/
void MultiplyBigNum(char cFirst[], char cSecond[], char cResult[]) {
  
  int i, j, iLen1, iLen2;
  int iFirst[N] = {0}, iSecond[N] = {0}, iResult[N] = {0};

  iLen1 = strlen(cFirst);
  iLen2 = strlen(cSecond);

  TranChar2Int(cFirst, iFirst);
  TranChar2Int(cSecond, iSecond);

  //先做对应位的乘法
  for (i = 0; i < iLen1; i++) {
    for (j = 0; j < iLen2; j++) {
      iResult[i + j] += iFirst[i] * iSecond[j];
    }
  }
  //再实现进位操作
  for (i = 0; i < iLen1 + iLen2; i++) {
    if (iResult[i] > 9) {
      iResult[i + 1] += iResult[i] / 10;
      iResult[i] %= 10;
    }
  }

  TranInt2Char(iResult, cResult, GetFirstNot0Index(iResult, iLen1 + iLen2));
}
int main(){
  char szLeft[N] = "7546676879932424";
  char szRight[N] = "2332432454";
  char szResult[N] = {0};
  MultiplyBigNum(szLeft, szRight, szResult);
  cout << szResult << endl;
  return 0;
}