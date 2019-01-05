/*
	Name:
	Author: tanlixing
	Date: 2018/10/19 21:44:34
	Description:
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
/*�궨������*/
#define   N   500      /*������������ά��*/

/*������������*/
int  GetFirstNot0Index(int iResult[], int iLen);
void TranChar2Int(const char *strArr,int iArray[]);
void PowOf10(char cNum[],int iPow,int iQuotientNum);
int  BigNumCmp(const char *pStr1,const char *pStr2);
void TranInt2Char(int iArray[],char cArray[],int index);

void   AddBigNum(char cFirst[],char cSecond[]);
void   ModBigNum(char cFirst[],char cSecond[]);
string SubtractBigNum(char cFirst[],char cSecond[]);
void   MultiplyBigNum(char cFirst[],char cSecond[],char cResult[]);
int    DivBigNum(char cFirst[],char cSecond[],char cResult[]);


/*
������  ��TranChar2Int
�������ܣ����ַ�����ת��Ϊ��������
���    : �ַ�����
����    ����������
����ֵ  ����
*/
void TranChar2Int(const char *strArr,int iArray[])
{
    int i,j,iLen = strlen(strArr);
    for (i = iLen - 1,j = 0; i >= 0; i --)
    {
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
void TranInt2Char(int iArray[],char cArray[],int index)
{
    int i,j;
    for (i = index,j = 0; i >= 0; i --)
    {
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
int GetFirstNot0Index(int iResult[], int iLen)
{
    int i;
    for(i = iLen-1; i>=0; --i)
    {
        if(iResult[i])    //�ҵ����λ��һ����Ϊ0
        {
            return i;
        }
    }
    return 0;
}
/*
������  ��BigNumCmp
�������ܣ��Ƚ�2�������Ĵ�С
���    : 2������
����    ����
����ֵ  ��0С�ڣ�1���ڣ�2����
*/
int BigNumCmp(const char *pStr1,const char *pStr2)
{
    int i;
    int iLen1 = strlen(pStr1);
    int iLen2 = strlen(pStr2);
    if (iLen1 > iLen2)
    {
        return 2;
    }
	else if (iLen1 < iLen2)
	{
		return 0;
	}
    else
    {
        for (i = 0; i < iLen1; i++)
        {
			if (pStr1[i] == pStr2[i])
			{
				continue;
			}
            else if (pStr1[i] > pStr2[i])
            {
                return 2;
            }
			else
			{
				return 0;
			}
        }
		if (iLen1 == i)
		{
			return 1;
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
void AddBigNum(char cFirst[],char cSecond[])
{
    int i,iLen;
    int iFirst[N] = {0},iSecond[N] = {0};
    //��2���������󳤶�
    iLen = (strlen(cFirst) > strlen(cSecond)) ? strlen(cFirst) : strlen(cSecond);
    TranChar2Int(cFirst,iFirst);
    TranChar2Int(cSecond,iSecond);
    for (i = 0; i < N; i ++)
    {
        iFirst[i] += iSecond[i];
        //�������9���λ
        if (iFirst[i] > 9)
        {
            iFirst[i] -= 10;
            iFirst[i+1] ++;
        }
    }
    TranInt2Char(iFirst,cFirst,GetFirstNot0Index(iFirst,iLen + 1));
}
/*
������  ��SubtractBigNum
�������ܣ������ݼ�������ִ�д˺���֮ǰ�뱣֤�������ڱ�����
���    : ����cFirst[]��cSecond[]
����    ������cFirst[]
����ֵ  ���Ǹ������ؿմ�����������"-"
*/
string SubtractBigNum(char cFirst[],char cSecond[])
{
	string str = "";
    int i,iLen;
	char cTmp[N];
    int iFirst[N] = {0},iSecond[N] = {0};
	//������������ڼ���ʱ����������������������Ӹ���-���ż���
	if (0 == BigNumCmp(cFirst,cSecond))
	{
		strcpy(cTmp,cFirst);
		strcpy(cFirst,cSecond);
		strcpy(cSecond,cTmp);
		str.append("-");
	}
    iLen = strlen(cFirst);
    TranChar2Int(cFirst,iFirst);
    TranChar2Int(cSecond,iSecond);
	memset(cFirst,0,iLen);
    for (i = 0; i < iLen; i++)  
    {  
        iFirst[i] -= iSecond[i];
        //�����λС��0�����λ
        if(iFirst[i] < 0)  
        {  
            iFirst[i] = iFirst[i] + 10;  
            iFirst[i+1] = iFirst[i+1] - 1;  
        }  
    } 
    TranInt2Char(iFirst,cFirst,GetFirstNot0Index(iFirst,iLen));
	return str;
}
/*
������  ��MultiplyBigNum
�������ܣ������ݳ˷�
���    : ����cFirst[]��cSecond[]
����    ������cResult[]
����ֵ  ����
*/
void MultiplyBigNum(char cFirst[],char cSecond[],char cResult[])
{
    int i,j,iLen1,iLen2;
    int iFirst[N] = {0},iSecond[N] = {0},iResult[N] = {0};
    iLen1 = strlen(cFirst);
    iLen2 = strlen(cSecond);

    TranChar2Int(cFirst,iFirst);
    TranChar2Int(cSecond,iSecond);
    //������Ӧλ�ĳ˷�
    for (i = 0; i < iLen1; i++)
    {
        for (j = 0; j < iLen2; j++)
        {
            iResult[i + j] += iFirst[i] * iSecond[j];
        }
    }
    //��ʵ�ֽ�λ����
    for (i = 0; i < iLen1 + iLen2; i++)
    {
        if (iResult[i] > 9)
        {
            iResult[i+1] += iResult[i]/10; 
            iResult[i]   %= 10;
        }
    }

    TranInt2Char(iResult,cResult,GetFirstNot0Index(iResult,iLen1 + iLen2));
}
/*
������  PowOf10
�������ܣ�(10^iPow)*iQuotientNum
���    : cNum[]��iPow��iQuotientNum
����    ������cNum[]
����ֵ  ����
*/
void PowOf10(char cNum[],int iPow,int iQuotientNum)
{
	int i;
	memset(cNum,0,strlen(cNum));
	cNum[0] = iQuotientNum + '0';
	for (i = 1; i <= iPow; i++)
	{
		cNum[i] = '0';
	}	
}
/*
������  ��DivBigNum
�������ܣ������ݳ���
���    : ����cFirst[]��cSecond[]
����    ������cResult[]
����ֵ  �����������������ӳ���ʱ����0�����෵��1
*/
int DivBigNum(char cFirst[],char cSecond[],char cResult[])
{
	string str = "";
    int iPower,iLen1,iLen2,iLenSubLen,iTmp;
	char cTmp[N] = {0};
    iLen1 = strlen(cFirst);
    iLen2 = strlen(cSecond);
   
	if (0 == BigNumCmp(cFirst,cSecond))
	{	
		return 0;
	}
	if (iLen1 == iLen2)
	{
		cResult[0] = '0';
		while(1 <= BigNumCmp(cFirst,cSecond))
		{
			SubtractBigNum(cFirst,cSecond);
			cResult[0]++;			
		}
		return 1;
	}
	while (2 == BigNumCmp(cFirst,cSecond))
	{
		iPower  = 0;  
		str.erase(str.begin(),str.end());
		str.append(cSecond);
		iLen1 = strlen(cFirst);
		iLenSubLen = iLen1 - iLen2;
		iTmp = iLenSubLen;
		while(iLenSubLen--) str.append("0");
		if (0 == BigNumCmp(cFirst,str.c_str()))
		{
			iTmp--;
			str.erase(str.end()-1);
		}
		strcpy(cTmp,str.c_str());
		while(1 <= BigNumCmp(cFirst,str.c_str()))
		{
			SubtractBigNum(cFirst,cTmp);
			iPower++;
		}
		PowOf10(cTmp,iTmp,iPower);
		AddBigNum(cResult,cTmp);
	}  
	return 1;
}
/*
������  ��ModBigNum
�������ܣ�������ȡ��
���    : ����cFirst[]��cSecond[]
����    ������cFirst[]
����ֵ  ����
*/
void ModBigNum(char cFirst[],char cSecond[])
{
    string str = "";
    int iLen1,iLen2,iLenSubLen;
	char cTmp[N] = {0};
    iLen1 = strlen(cFirst);
    iLen2 = strlen(cSecond);
	
	if (0 == BigNumCmp(cFirst,cSecond))
	{	
		return ;
	}
	if (iLen1 == iLen2)
	{
		while(1 <= BigNumCmp(cFirst,cSecond))
		{
			SubtractBigNum(cFirst,cSecond);			
		}
		return ;
	}
	while (2 == BigNumCmp(cFirst,cSecond))
	{
		str.erase(str.begin(),str.end());
		str.append(cSecond);
		iLen1 = strlen(cFirst);
		iLenSubLen = iLen1 - iLen2;
		while(iLenSubLen--) str.append("0");
		if (0 == BigNumCmp(cFirst,str.c_str()))
		{
			str.erase(str.end()-1);
		}
		strcpy(cTmp,str.c_str());
		while(1 <= BigNumCmp(cFirst,str.c_str()))
		{
			SubtractBigNum(cFirst,cTmp);
		}
	}  
	return ;
}
int main()
{
	string  strIsNegativeNum;
	char szLeft[N] = "7546676879932424";
    char szRight[N] = "2332432454";
    char szResult[N] = {0};
    AddBigNum(szLeft,szRight);
    //strIsNegativeNum = SubtractBigNum(szLeft,szRight);
    //MultiplyBigNum(szLeft,szRight,szResult);
    //DivBigNum(szLeft,szRight,szResult);
	//ModBigNum(szLeft,szRight);
	cout<<szLeft<<endl;
    //cout<<strIsNegativeNum.append(szLeft).c_str()<<endl;
    //cout<<szResult<<endl;
	return 0;
}



