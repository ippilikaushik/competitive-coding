#include<iostream>
using namespace std;
int main()
{
	int t,x,y;
	cin>>t;
	while(t--)
	{int i=0,j=0,val=0;
	cin>>x>>y;
	if(x==y)
	{
		if(x%2==0)
		cout<<2*x<<endl;
		else
		cout<<(x*x)-((x-1)*(x-1))<<endl;
	}
   else if((x-y)==2)
	{
		if(x%2!=0)
		cout<<(x*y)-((x-1)*(y-1))<<endl;
		else
		cout<<x+y<<endl;
	}
	else
	cout<<"No Number"<<endl;
		
	}
}
