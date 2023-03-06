#include<stdio.h>
#include<iostream>
using namespace std;
class product
{
	public:
	int pno;
	char pname[20];
	float proprice;
	public:
	void accept()
	{
		cout<<"\nenter product number=";
		cin>>pno;
		cout<<"\nenter product name=";
		cin>>pname;
		cout<<"\nenter product price=";
		cin>>proprice;
	}
	
};
class discount:public product{
	public:
	int dis;
	void accept2()
	{
		cout<<"\nenter protduct discount in percentage=";
		cin>>dis;
	}
	void display()
	{
		cout<<"\n---product details---";
		cout<<"\nproduct number="<<pno;
		cout<<"\nproduct name="<<pname;
		cout<<"\nproduct number="<<proprice;
		cout<<"\nproduct discount="<<dis;
	}
};

int main()
{
	discount d[20];
	int i,n,tt=0,fd=0;
	char cname[20];
	cout<<"\nenter name of customer=";
	cin>>cname;
	cout<<"\nenter number of product=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		d[i].accept();
		d[i].accept2();
	}
	cout<<"\n***YOUR BILL***";
	cout<<"\nname of coustomer="<<cname;
	for(i=1;i<=n;i++)
	{
		d[i].display();
		tt=tt+d[i].proprice;
		fd=fd+((d[i].proprice*d[i].dis)/100);
	}
	cout<<"\ntotal-->"<<tt<<endl;
}
