#include<iostream>
using namespace std;
int  day(int year,int month,int date)
{
	int months[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	int i,days=0;
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		months[2]=29;
	} 
	else
	{
		months[2]=28;
	}
	for(i=1;i<month;i++)
	{
		days=days+months[i];
	}
	days=days+date;
    cout<<days<<endl;	
}
int main()
{

	day(2018,2,25);
		
	return 0;
}

