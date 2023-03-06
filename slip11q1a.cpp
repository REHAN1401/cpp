#include<stdio.h>
#include<iostream>
using namespace std;
class date{
	public:
	int dd,mm,yyyy;
	public: 
	date(int d,int m,int y)
	{
		dd=d;
		mm=m;
		yyyy=y;
	}
	
	void display()
	{
		if(mm==1)
		{
			cout<<dd<<"/"<<"jan"<<"/"<<yyyy;
		}
		else if(mm==2)
		{
			cout<<dd<<"/"<<"feb"<<"/"<<yyyy;
		}
		else if(mm==3)
		{
			cout<<dd<<"/"<<"mar"<<"/"<<yyyy;
		}
		else if(mm==4)
		{
			cout<<dd<<"/"<<"apr"<<"/"<<yyyy;
		}
		else if(mm==5)
		{
			cout<<dd<<"/"<<"may"<<"/"<<yyyy;
		}
		else if(mm==6)
		{
			cout<<dd<<"/"<<"jun"<<"/"<<yyyy;
		}
		else if(mm==7)
		{
			cout<<dd<<"/"<<"july"<<"/"<<yyyy;
		}
		else if(mm==8)
		{
			cout<<dd<<"/"<<"aug"<<"/"<<yyyy;
		}
		else if(mm==9)
		{
			cout<<dd<<"/"<<"sept"<<"/"<<yyyy;
		}
		else if(mm==10)
		{
			cout<<dd<<"/"<<"oct"<<"/"<<yyyy;
		}
		else if(mm==11)
		{
			cout<<dd<<"/"<<"nov"<<"/"<<yyyy;
		}
		else if(mm==12)
		{
			cout<<dd<<"/"<<"dec"<<"/"<<yyyy;
		}
		else{
			cout<<"wrong data";
		}
   	}
};

int main()
{
	int d,m,y;
		cout<<"\nenter date=";
		cin>>d;
		cout<<"\nenter month=";
		cin>>m;
		cout<<"\nenter year=";
		cin>>y;
	date d1(d,m,y);
	d1.display();	
}
