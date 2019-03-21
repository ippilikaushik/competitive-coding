
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,b,l,ct=0,n1;
vector<int>v;
cin>>n;
n1=n;
cin>>b;
n--;
while(n--)
{
	cin>>l;
	v.push_back(l);
}
sort(v.begin(),v.end());
while(v[n1-2]>=b)
{
	v[n1-2]--;
	b++;
	ct++;
sort(v.begin(),v.end());
}
cout<<ct;
return 0;
}
