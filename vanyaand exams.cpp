
#include<bits/stdc++.h>
using namespace std;

int main ()
{
long long n,r,avg,s=0,ct=0;
cin>>n>>r>>avg;
long long a[n],b[n];
for(long long i=0;i<n;i++)
{
	cin>>a[i]>>b[i];
	s+=a[i];
}
s=(avg*n)-s;
long long ct2;
while(s--)
{
	ct2=0;
	long long u=b[0];
	long long i,pos=0;
	for(i=0;i<n;i++)
	{
		if(b[i]<=u&&a[i]<r)
		{
		u=b[i];
		pos=i;
	}
	if(a[i]==r)
	{
		ct2++;
	}
	}
	if(ct2==n)
	break;
	if(a[pos]<r)
	{
		ct+=u;
		a[pos]++;
	}
}
cout<<ct;
return 0;
}

