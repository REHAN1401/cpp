#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class student{
	int sid;
	string name;
	char clas;
	public:
	void accept()
	{
		cout<<"\nenter student id=";
		cin>>sid;
		cout<<"\nenter student name=";
		cin>>name;
		cout<<"\nenter student class=";
		cin>>clas;
	}
	void display()
	{
		cout<<"\nstudent id="<<sid;
		cout<<"\nstudent name="<<name;
		cout<<"\nstudent class="<<clas;
	}
};

class comp{
	public:
	int cid;
	string cname;
	public:
	void accept2()
	{
		cout<<"\nenter competion id=";
		cin>>cid;
		cout<<"\nenter cmpeteition name=";
		cin>>cname;
	}
	void display2()
	{
		cout<<"\ncompetion id="<<cid;
		cout<<"\ncompetion name="<<cname;
	}
};

class stucmp: public student,public comp{
	public:
	int rank;
	public:
		void accept3()
		{
			cout<<"\nenter the rank=";
			cin>>rank;
		}
		void display3()
		{
			display();
			display2();
			
			cout<<"\nrank="<<rank;
		}
};

class temp{
	
};

int main()
{	
	string cn;
	int ch,n,i;
	stucmp c[30];
	stucmp temp;
	while(1)
	{
		cout<<"\n1.ENTER INFORMATION.\n2.display student details i ascending order of a rank of particular competion.\n3.bubble sort.\n4.exit.\n";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\nenter number of students=";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				c[i].accept();
				c[i].accept2();
				c[i].accept3();
				c[i].display3();
			}
			break;
			
			case 2:cout<<"\nenter a competion name=";
			cin>>cn;
			for(i=1;i<=n;i++)
			{
				if(cn==c[i].cname)
				{
				c[i].display3();
			}
			break;
			}
			case 3:
				
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++)
				{
					if(c[i].rank>c[j].rank)
					{
					temp=c[i];
					c[i]=c[i+1];
					c[i+1]=temp;
					}
				}
			}
			
			for(i=0;i<n;i++)
			{
				c[i].display3();	
			}
			break;
			
			case 4:{exit(0);
				

		}
	}
}

}
