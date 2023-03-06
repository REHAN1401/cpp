#include<stdio.h>
#include<iostream>
using namespace std;
class myarray{
	public:
	int* arr;
	int size;
	public:
	myarray(int s)
	{
		size=s;
		arr=new int[size];
	}
	
	~myarray()
	{
		delete[]arr;
	}
	
	void addsum()
	{
		int sum=0;
		for(int i=0;i<size;i++)
		{
			sum+=arr[i];
		}
		cout<<"sum of array elements:"<<sum<<endl;
	}
};

int main()
{
	int size;
	cout<<"enter size of array:";
	cin>>size;
	myarray a(size);
	
	cout<<"enter:"<<size<<"integer:"<<endl;
	for(int i=0;i<size;i++)
	{
	cin>>a.arr[i];
	}
	a.addsum();
}
