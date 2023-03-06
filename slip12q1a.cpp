#include<stdio.h>
#include<iostream>
using namespace std;
class item{
	public:
	int pid,qty,price;
	string pname;
	static int cnt;
	void accept();
	void display();
	static void count();
};

int item::cnt;
void item::accept()
{
	cout<<"\nenter product id=";
	cin>>pid;
	cout<<"\nenter product name=";
	cin>>pname;
	cout<<"\nenter product qunantity=";
	cin>>qty;
	cout<<"\nenter product price=";
	cin>>price;
	cnt++;
}

void item::display()
{
	cout<<"\nproduct id="<<pid;
	cout<<"\nproduct name="<<pname;
	cout<<"\nproduct qunantity="<<qty;
	cout<<"\nproduct price="<<price;
}

void item::count()
{
	cout<<"\ntotal count="<<cnt;	
}

int main()
{
	int i,n;
	item a;
	cout<<"\nenter items=";
	cin>>n;
	for(i=0;i<n;i++)
	{
	a[i].accept();	
	}
	for(i=0;i<n;i++)
	{
	a[i].display();	
	}	
	
	item::count();
}



