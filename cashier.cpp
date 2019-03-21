
#include<bits/stdc++.h>
using namespace std;
int main ()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);

long long n,l,a,ct=0,x=0,k=0;
cin>>n>>l>>a;

long long t[n],L[n];
for(long long i=0;i<n;i++)
{
	cin>>t[i]>>L[i];
}
while(k<n)
{
	if(t[k]==x)
	{
		x+=L[k];
		k++;
		if(k==n)
		break;
	}
	if((x+a)<=t[k])
	{
		x+=a;
		ct++;
	}
	else
	{
		x=t[k];
	}
	
}
while((x+a)<=l)
{
	ct++;
	x+=a;
}
cout<<ct;
return 0;
}
