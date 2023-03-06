#include<stdio.h>
#include<iostream>
using namespace std;
class clock{
	int h,m,s,sec;
	public:
	void sclock(int hr,int mm,int sec)
	{
		h=hr;
		m=mm;
		s=sec;
	}
	void showclock()
	{
		cout<<"\nhh:"<<h<<"mm:"<<m<<"ss:"<<s;
	}
	
	void tick()
	{
		cout<<"\nenter seconds to be incremented=";
		cin>>sec;
		s=s+sec;
	}
};

int main()
{
	clock c;
	int hr,mm,sec;
	cout<<"\nenter hours=";
	cin>>hr;
	cout<<"\nenter minutes=";
	cin>>mm;
	cout<<"\nenter seconds=";
	cin>>sec;
	c.sclock(hr,mm,sec);
	c.showclock();
	c.tick();
	c.showclock();
}
