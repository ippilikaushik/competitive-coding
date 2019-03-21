#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	if(n%2==0)
	{
		long long int m=n/2;
		if(k<=m)
		cout<<(2*k - 1);
		else 
		cout<<(k-m)*2;
	}
		if(n%2!=0)
	{
		long long int m=n/2;
		if(k<=m+1)
		cout<<(2*k - 1);
		else 
		cout<<(k-m-1)*2;
	}
	
	return 0;
}
