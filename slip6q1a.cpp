#include<stdio.h>
#include<iostream>
using namespace std;
class square{
	friend class rectangle;
	public:
	int side;
	sqaure(int s)
	{
		side=s;
	}
};

class rectangle{
	public:
	int len;
	int bred;
	int area()
	{
		return	len*bred;
	}
	
	void shape(square a)
	{
		len=a.side;
		bred=a.side;
	}
};

int main()
{
	square s;
	rectangle r;
	r.shape(square a);
	cout<<"area is="<<r.area();
}
