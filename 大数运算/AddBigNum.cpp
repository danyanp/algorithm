/**
 * 大数加法
 * **/
#include<iostream>
#include<cstring>
#define N 500
using namespace std;
/*
函数名  ：TranChar2Int
函数功能：将字符数组转化为整型数组
入参    : 字符数组
出参    ：整型数组
返回值  ：无
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
函数名  ：AddBigNum
函数功能：大数据加法
入参    : 数组cFirst[]与cSecond[]
出参    ：数组cFirst[]
返回值  ：无
*/
void AddBigNum(char cFirst[], char cSecond[]) {
  int i, iLen;
  int iFirst[N] = {0}, iSecond[N] = {0};
  //求2个数组的最大长度
  iLen = (strlen(cFirst) > strlen(cSecond)) ? strlen(cFirst) : strlen(cSecond);
  TranChar2Int(cFirst, iFirst);
  TranChar2Int(cSecond, iSecond);
  for (i = 0; i < N; i++) {
    iFirst[i] += iSecond[i];
    //如果大于9需进位
    if (iFirst[i] > 9) {
      iFirst[i] -= 10;
      iFirst[i + 1]++;
    }
  }
  TranInt2Char(iFirst, cFirst, GetFirstNot0Index(iFirst, iLen + 1));
}

int main() {
  char szLeft[N] = "7546676879932424";
  char szRight[N] = "2332432454";
  char szResult[N] = {0};
  AddBigNum(szLeft, szRight);
  cout<<szLeft<<endl;
  return 0;
}

