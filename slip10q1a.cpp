#include<stdio.h>
#include<iostream>
using namespace std;
class account{
	public:
	int ano;
	string bal;
	string acctype;
	public:
	account()
	{
		cout<<"constructor"<<endl;
	}
	~account(){
		cout<<"destructor"<<endl;
	}
	void accept()
	{
		cout<<"\nenter account number=";
		cin>>ano;
		cout<<"\nenter account balance=";
		cin>>bal;
		cout<<"\nenter account type=";
		cin>>acctype;
		
	}
	
	void display()
	{
	cout<<"\naccount number="<<ano;
	cout<<"\naccount balance="<<bal;
	cout<<"\naccount type="<<acctype;
	}
};

int main()
{
	int num;
	account* a=new account[10];
	delete[]a;
	cout<<"\nenter how many records u want?";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		a[i].accept();
	}
	for(int i=0;i<num;i++)
	{
		a[i].display();
	}
}
