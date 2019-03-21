#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,j=1;
		cin>>n;
		int p=pow(5,j);
		while(p<=n)
		{
			sum+=n/p;
			j++;
			p=pow(5,j);
		}
		cout<<sum<<endl;
	}
	return 0;
}
