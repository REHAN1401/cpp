#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int &swap1,int &swap2)
{
	swap3=swap1;
	swap1=swap2;
	swap2=swap3;
}
int main()
{
	int a,b;
	cout<<"enter 1 number-->";
	cin>>a;
	cout<<"\nenter 2 number-->";
	cin>>b;
	swap(a,b);
	cout<<"\n--after swap--";
	cout<<"\n1 number value="<<a;
	cout<<"\n2 nymber value="<<b;
}
