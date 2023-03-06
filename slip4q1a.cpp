#include<stdio.h>
#include<iostream>
using namespace std;
class worker{
	char name[10];
	int hr;
	public:
	void accept()
	{
		cout<<"\nenter name of employee-->";
		cin>>name;
		cout<<"\nenter no. of hours-->";
		cin>>hr;
	}
	void salary(){
		int payrate=50;
		int sal;
		sal=payrate*hr;
		cout<<"\nsalary is---->"<<sal;
	}
};
int main()
{
	worker w;
	w.accept();
	w.salary();
}
