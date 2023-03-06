//Write a C++ program to check maximum and minimum of two integer numbers. (Use Inline function and Conditional operator
#include<stdio.h>
#include<iostream>
using namespace std;
class account{
	protected:
	float bal,bal2;	
	string acc_name;
	string acc_contact;
	void data()
	{
		cout<<"\nenter account holder name=";
		cin>>acc_name;
		cout<<"\nenter account holder contact number=";
		cin>>acc_contact;
			
	}
	void display()
	{
		cout<<"\naccount holder name="<<acc_name;
		cout<<"\naccount holder number"<<acc_contact;
	}
	
	
	
};
class savingacc: protected account{
	public:
		void balance()
		{
		cout<<"\nenter your current account balance=";
		cin>>bal;
		data();
		bal=bal+bal*0.5;
		}
		void display()
		{
			cout<<"\nsaving account number="<<acc_name;
			cout<<"\nsaving saving account balance="<<bal;
		}
		
};

class curr_acc:protected account{
	public:
		
		void balance2()
		{
		cout<<"\nenter your current account balance=";
		cin>>bal2;
		data();
		bal2=bal2+bal2*0.15;
		}
		void display()
		{
			cout<<"\nsaving account number="<<acc_name;
			cout<<"\nsaving saving account balance="<<bal2;
		}
};

int main()
{
	class savingacc s1[20];
	class curr_acc c1[20];
	int no,n,i;
	char ch;
	cout<<"\nif saving account enter S or C for current account=";
	cin>>ch;
	int num;
	cout<<"enter number ";
	cin>>num;
	while(1)
	{	
 		cout<<"\nenter no. of accounts=";
		cin>>n;
		switch(ch)
		{
			case 's':
	
			for(i=1;i<=n;i++)
			{
				s1[i].balance();	
			}
			for(i=1;i<=n;i++)
			{
				s1[i].display();
			}
		
			break;
			
			case 'c':
			cout<<"\nenter no. of accounts=";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				c1[i].balance2();	
			}
			for(i=1;i<=n;i++)
			{
			c1[i].display();
			}
			break;
			
		}
	}
		
}
