#include<stdio.h>
#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
	void setpoint(int a,int b)
	{
		x=a;
		y=b;
	}
	void showpoint()
	{
		cout<<"("<<x<<","<<y<<")";
	}
};

int main()
{
	int a,b;
	point p;
	cout<<"enter coordinates"<<endl;
	cout<<"\nenter x=";
	cin>>a;
	cout<<"\nenter y=";
	cin>>b;
	p.setpoint(a,b);
	p.showpoint();
}

