
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll m,n,ct=0;
cin>>n>>m;
if(m%n!=0)
{
	cout<<"-1";
	return 0;
}
else
{
	m=m/n;
	while(m!=1)
	{
		if(m%2==0)
		{
			m/=2;
			ct++;
		}
		else if (m%3==0)
		{
			m/=3;
			ct++;
		}
		else
		{
			cout<<"-1";
			goto x;
		}
	}
	cout<<ct;
}
x:
return 0;
}
