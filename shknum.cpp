#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ct=0;
		if(n==1)
		{
			cout<<'2'<<endl;
			continue;
		}
		while(pow(2,ct)<=n)
		{
			ct++;
		}
		if(pow(2,ct-1)==n)
		{
			int x=1;
			cout<<x<<endl;
			continue;
		}
		int n2=n-pow(2,ct-1);
		int ct2=0;
		while(pow(2,ct2)<=n2)
		{
			ct2++;
		}
		int v1=abs(n2-pow(2,ct2-1));
		int v2=0;
		while(v2<v1)
		{
			v2++;
			n++;
				int ct1=0;
		while(pow(2,ct1)<=n)
		{
			ct1++;
		}
		if(pow(2,ct1-1)==n)
		{
			continue;
		}
		int n21=n-pow(2,ct1-1);
		int ct21=0;
		while(pow(2,ct21)<=n21)
		{
			ct21++;
		}
		int v11=abs(n21-pow(2,ct21-1));
			if(v11==0)
			 {
			 break;
		}
		}
		if(v2<v1)
		cout<<v2<<endl;
		else
		cout<<v1<<endl;
	}
}
