#include<stdio.h>
#include<iostream>
using namespace std;
class time{
	public:
	int hour;
	int minute;
	int second;
	public:
	friend istream &operator>>(istream &scan,time &t)
	{
	scan>>t.hour>>t.minute>>t.second;
	return scan;
	}
	friend ostream &operator<<(ostream &print,time &t)
	{
	print<<t.hour<<":"<<t.minute<<":"<<t.second;
	return print;
	}
	void operator==(time z)
	{
	if(hour==z.hour&&minute==z.minute&&second==z.second)
	{
	cout<<"\nBoth the time are same: ";
	}
	else
	{	
	cout<<"\nTime are not same: ";
	}
	}	
};

int main()
{
	time t,t1;
	cout<<"\nENTER THE 1 TIME:";
	cin>>t;
	cout<<"\nTIME: ";
	cout<<t;
	cout<<"\nEnter the Time 2nd: HOUR MINUTE SECOND \n";
	cin>>t1;
	cout<<"\nTIME: ";
	cout<<t1;
	t==t1;
}
