#include<iostream>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	unsigned long long k;
	while(t--)
	{
		cin>>k;
		long int x=k%4,y;
		if(x==1)
		{
		x=192;
		y=k/4;}
		else if(x==2)
		{
		x=442;
		y=k/4;
	}
		else if(x==3)
		{
		x=692;
		y=k/4;
	    }
		else if(x==0)
		{
		 x=942;
		 y=(k/4)-1;
	    }
		 
		if(y!=-1&&y!=0)
		cout<<y<<x<<endl;
		else
		cout<<x<<endl;
	}
	return 0;
}
