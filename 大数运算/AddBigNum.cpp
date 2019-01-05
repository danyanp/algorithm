/**
 * �����ӷ�
 * **/
#include<iostream>
#include<cstring>
#define N 500
using namespace std;
/*
������  ��TranChar2Int
�������ܣ����ַ�����ת��Ϊ��������
���    : �ַ�����
����    ����������
����ֵ  ����
*/
void TranChar2Int(const char *strArr, int iArray[]) {
  int i, j, iLen = strlen(strArr);
  for (i = iLen - 1, j = 0; i >= 0; i--) {
    iArray[j++] = strArr[i] - '0';
  }
}
/*
������  ��TranInt2Char
�������ܣ�����������ת��Ϊ�ַ�����
���    : ��������
����    ���ַ�����
����ֵ  ����
*/
void TranInt2Char(int iArray[], char cArray[], int index) {
  int i, j;
  for (i = index, j = 0; i >= 0; i--) {
    cArray[j++] = iArray[i] + '0';
  }
}
/*
������  ��GetFirstNot0Index
�������ܣ���ȡ�������һλ�����±�
���    : ����iResult[]�볤��iLen
����    ����
����ֵ  ���������һλ�����±�
*/
int GetFirstNot0Index(int iResult[], int iLen) {
  int i;
  for (i = iLen - 1; i >= 0; --i) {
    if (iResult[i])  //�ҵ����λ��һ����Ϊ0
    {
      return i;
    }
  }
  return 0;
}
/*
������  ��AddBigNum
�������ܣ������ݼӷ�
���    : ����cFirst[]��cSecond[]
����    ������cFirst[]
����ֵ  ����
*/
void AddBigNum(char cFirst[], char cSecond[]) {
  int i, iLen;
  int iFirst[N] = {0}, iSecond[N] = {0};
  //��2���������󳤶�
  iLen = (strlen(cFirst) > strlen(cSecond)) ? strlen(cFirst) : strlen(cSecond);
  TranChar2Int(cFirst, iFirst);
  TranChar2Int(cSecond, iSecond);
  for (i = 0; i < N; i++) {
    iFirst[i] += iSecond[i];
    //�������9���λ
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

