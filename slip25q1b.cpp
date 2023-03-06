#include<stdio.h>
#include<iostream>
using namespace std;
class train{
	protected:
	int tno;
	char tname[20];
	public:
	void accept()
	{
		cout<<"\nenter train no.=";
		cin>>tno;
		cout<<"\nenter train name=";
		cin>>tname;
	}
	void display()
	{
		cout<<"\n----TRAIN INFO----";
		cout<<"\ntrain no.="<<tno;
		cout<<"\ntrain name="<<tname;
	}
};
class route:public train
{
	protected:
	int rid;
	char source[20],dest[20];
	public:
	void accept2()
	{
		accept();
		cout<<"\nenter route id=";
		cin>>rid;
		cout<<"\nenter Source=";
		cin>>source;
		cout<<"\nenter destination=";
		cin>>dest;
	}
	void display2()
	{
	display();
	cout<<"\nRoute Id="<<rid;
	cout<<"\nSource="<<source;
    cout<<"\nDestination="<<dest; 
	}
};

	class reservation:public route
	{
	int seat,cls;
	float fare;
	char tdt[20];
	public:
	void accept3()
	{

		accept2();
		cout<<"\n Total_seats=";
		cin>>seat;
		cout<<"\n Train_class=";
		cin>>cls;
		cout<<"\n Train_fare=";
		cin>>fare;
		cout<<"\n Trav_date=";
		cin>>tdt;
	}
	void display3()
		{
		display2();
		cout<<"\nTotal_seats="<<seat;
	    cout<<"\nTrain_class="<<cls;
		cout<<"\nTotal_Fare="<<fare;
		cout<<"\nTrav_date="<<tdt;
		}
		void search(int s)
	{
		if(s==cls)
		{
		display3();
		}
	}
};

int main()
{
	int n,ch,i,cls;
	route r[20];
	reservation s[20];
	
	while(1)
	{
	cout<<"\n************** Menu *******************";
	cout<<"\n 1: Accept details=";
	cout<<"\n 2: Display All n details=";
	cout<<"\n 3: Search train=";
	cout<<"\n 4: Exit";
	cout<<"\n Enter Choice=";
	cin>>ch;
	switch(ch)
	{
	case 1:cout<<"\nenter how many records you want=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s[i].accept3();
	}
	break;
	
	case 2:for(i=1;i<=n;i++)
	{
		s[i].display3();
	}
	break;
	
	case 3:cout<<"\n Enter Train_class=";
	cin>>cls;
	for(i=1;i<=n;i++)
	{
		s[i].search(cls);
	}
	break;
	
	case 4:exit(0);
	}
  }
}

	
