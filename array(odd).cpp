//this is a demo
#include<stdio.h>
int main()
{
  int a[100];
  int n,i;
  
  printf("enter numbers:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++)
    { 
      if(!(a[i]%2)==0)    
	  { 
	   printf("%d",a[i]);
      }
	 
    } 
}
    
