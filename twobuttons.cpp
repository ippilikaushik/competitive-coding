
#include <bits/stdc++.h>
using namespace std;

int main() {
long long n,m,ct=0,n1,m1;
cin>>n>>m;
n1=n;
m1=m;
if(m<=n)
ct=n-m;
else
{
	long long a=0,b=0,d=0,s=0;
	while(n<m)
	{
		n*=2;
		a++;
		d=1;
	}
	if(d)
	a+=(n-m);
	n=n1;
	while(n>(m/2))
	{
		n=n/2;
		s=1;
	}
	if(s)
	{
	b+=((m/2)-n);
	b++;
    }
	if(b<=a&&b!=0&&a!=0)
	ct=b;
	else
	ct=a;
	
}
cout<<ct;

	return 0;
}
