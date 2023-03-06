#include<iostream>
using namespace std;

class city{
	public:
		string name;
		long population;

		void accept(){
			cout<<"\nEnter name of city->";
			cin>>name;
			cout<<"\nEnter the population of the city->";
			cin>>population;
		}
		
		void display(){
			cout<<"\nCity name--"<<name;
			cout<<"\nCity population"<<population;
		}
};

int main(){
	city c[30];
	city temp;
	int num;
	int ch;
	
	while(1){
		cout<<"\n-----------MENU------------";
		cout<<"\n1.Enter information";
		cout<<"\n2.Display information";
		cout<<"\n3.bubble sort";
		cout<<"\n4.EXIT"<<endl;
		cin>>ch;
		
		switch(ch){
			case 1:{
				cout<<"\nEnter how many cities information you want->";
				cin>>num;
				c[num];
				
				for(int i=0;i<num;i++){
					c[i].accept();
				}
				break;
				
			}
			
			case 2:{
				for(int i=0;i<num;i++){
					c[i].display();
				}
				break;
			}
			
			case 3:{
			for(int i=0;i<num;i++){
				for(int j=i+1;j<num;j++)
				{
					if(c[i].population>c[j].population)
					{
					temp=c[i];
					c[i]=c[i+1];
					c[i+1]=temp;
					}
				}
			}
				
			break;
			
			}
			
			case 4:{
				exit(0);
				break;
			}
		}
	}
	
	
	
}
