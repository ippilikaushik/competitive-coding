#include<iostream>
using namespace std;
int main()
{
	int t,n;
    long double f=1;
	cin>>t;
	while(t--)
	{
		f=1;
		cin>>n;
		
		for(int i=1;i<=n;i++)
		f=f*i;
		cout<<f<<endl;
	}
	return 0;
}
