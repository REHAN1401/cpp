#include<stdio.h>
#include<iostream>
using namespace std;
class sumdata{
	int a,b,s,i;
	public:
	int sum(int x,int y)
	{
		a=x;
		b=y;
		return(a+b);
	}
	float sum(float x,float y,float z)
	{
		return(x+y+z);
	}
	int sum(int a[],int n)
	{
		s=a[0];
		for(i=1;i<=n;i++)
		{
			s=s+a[i];
		}
		return (s);
	}
};
int main()
{
   int a[10],n,i,x,y;
   float r,v,k;
   sumdata p; 
   cout<<"\nEnter 1st integer number : ";
   cin>>x;
   cout<<"\nEnter 2nd integer number : ";
   cin>>y;
   cout<<"\nsum of 2 integer numbers : "<<p.sum(x,y)<<"\n";
   
   
   cout<<"\nEnter 1st Float number : ";
   cin>>r;
   cout<<"\nEnter 2nd Float number : ";
   cin>>v;
   cout<<"\nEnter 3rd Float number : ";
   cin>>k;
   cout<<"\nsum of 3 Float numbers : "<<p.sum(r,v,k)<<"\n"; 
  
   cout<<"\nEnter how many elements in an array: ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	cout<<"\nenter elements=";
      cin>>a[i];
   }  
   
 cout<<"\nsum of all array elements : "<<p.sum(a,n);
    
}
