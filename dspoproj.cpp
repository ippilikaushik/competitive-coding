#include<iostream>
using namespace std;
int main()
{
	int n,x;
	char rep='y';
	while(rep=='y')
	{
		cout<<"please enter your input";
		cin>>n;
		x=(n/10);
			x=x*10;
		while(n!=0)//loop exits when you press 0
		{
			cout<<x<<" ";
			x=x+10;
			cin>>n;
			
		}
		cout<<"do you wish to try again ?";
		cin>>rep;
	}
	return 0;
}
