#include<stdio.h>
#include<iostream>
using namespace std;
class inventory{
	int mnum,price,stock;
	char cname[10];
	public:
	void accept()
	{
		cout<<"\nenter model number=";
		cin>>mnum;
		cout<<"\nenter mobile company name=";
		cin>>cname;
		cout<<"\nenter mobile price=";
		cin>>price;
		cout<<"\nenter mobile stock=";
		cin>>stock;
		cout<<"\nmodel number="<<mnum;
		cout<<"\nmobile company name="<<cname;
		cout<<"\nmobile price="<<price;
		cout<<"\nmobile stock="<<stock;
	}
	
	void sale()
	{
		int sales;
		cout<<"\nmodel number="<<mnum;
		cout<<"\nenter quantity to sale=";
		cin>>sales;
		stock=stock-sales;
		cout<<"\nstocks remaining="<<stock<<endl;
	}
};

int main()
{
	int ch,i,n;
	inventory in[30];
	while(1)
	{
		cout<<"\n1.accept and display details.\n2.to sale mobile.\n3.to purchase mobile.\n4.exit.\n";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\nenter number of data-->";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				in[i].accept();
			}
			break;
			
			case 2:for(i=1;i<=n;i++)
			{
				in[i].sale();
			}
			break;
			
			case 3:for(i=1;i<=n;i++)
			{
				in[i].purchase();
			}
			break;
			
			case 4:exit(0);
		}	
		
	}
}

