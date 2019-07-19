#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2;
		cin>>n1>>n2;
		for(int i=n1;i<=n2;i++)
		{
			int f=0;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
				f=1;
				break;
			}
			}
			if(!f&&i!=1)
			cout<<i<<endl;
		}
	}
	return 0;
}
