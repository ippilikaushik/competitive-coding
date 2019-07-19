
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{

ll n,ct=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
ll u=ceil(a[n-1]/2.0);
for(long long int i=n/2;i<n;i++)
{
	if(a[i]>u)
	ct++;
}
cout<<ct;
return 0;
}
