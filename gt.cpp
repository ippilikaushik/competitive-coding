
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll t,m,ct;
cin>>t;
while(t--)
{
	cin>>m;
	ct=0;
	while(m>1)
	{
		m/=2;
		ct++;
	}
	cout<<ct<<endl;
}
return 0;
}
