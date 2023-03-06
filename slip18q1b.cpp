#include<stdio.h>
#include<iostream>
using namespace std;
class media{
	public:
	virtual void display()=0;	
};
class newspaper:public media{
	public:
	int npages,nprice;
	char nname[20],neditor[20];
	void accept()
	{
		cout<<"\nenter the newspaper name=";
		cin>>nname;
		cout<<"\nenter the price=";
		cin>>nprice;
		cout<<"\nenter no of pages=";
		cin>>npages;
		cout<<"\nenter the editor name=";
		cin>>neditor;
	}
	void display();
};

class magzine:public media{
	public:
	char mname[20],meditor[20];
	int mprice;
	void accept2()
	{
		cout<<"\nenter the magzine name=";
		cin>>mname;
		cout<<"\nenter the editor name=";
		cin>>meditor;
		cout<<"\nenter the price=";
		cin>>mprice;
	}
	void display();
};

void newspaper::display(){
	cout<<"\nnewspaper name"<<nname;
	cout<<"\nprice="<<nprice;
	cout<<"\nno of pages="<<npages;
	cout<<"\neditor="<<neditor;
}

void magzine::display(){
	cout<<"\nmagzine name"<<mname;
	cout<<"\nprice="<<mprice;
	cout<<"\neditor="<<meditor;
}

int main(){
	cout<<"\n----newspaper details----"<<endl;
	newspaper n;
	n.accept();
	n.display();
	cout<<"\n----magzine details----"<<endl;
	magzine m;
	m.accept2();
	m.display();
}
