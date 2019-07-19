
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int n,i,ct=0,l=0;
cin>>n;
long long int a[2*n];
for(i=0;i<n;i++)
{
	cin>>a[i];
	a[n+i]=a[i];
}
for(i=0;i<2*n;i++)
{
	if(a[i]==1)
	{
		l++;
		
	}
	else
	{
		ct=max(ct,l);
		l=0;
	}
}
cout<<ct;
return 0;
}
