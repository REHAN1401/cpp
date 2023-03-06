#include<stdio.h>
#include<iostream>
using namespace std;
class number{
	static int cnt;
	public:
	static  void display()
	{
		cout<<"\nno. of times call show:"<<cnt;
		cnt++;
	}
};

int number::cnt;
int main()
{
	number s1,s2,s3,s4;
	s1.display();
	s2.display();
	s3.display();
	s4.display();
}
