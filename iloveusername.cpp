
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,a,ct=0;
vector<int>v;
cin>>n;
cin>>a;
v.push_back(a);
n--;
while(n--)
{
	cin>>a;
	sort(v.begin(),v.end());
	if(a<v[0]||a>v[v.size()-1])
	ct++;
	v.push_back(a);
}
cout<<ct;
return 0;
}

