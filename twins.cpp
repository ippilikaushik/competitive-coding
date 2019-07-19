#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,s=0;
	vector<int>v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s+=a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int q=0,ct=0;
	while(q<=s)
	{
		int r=v[0];
		v.erase(v.begin());
		q+=r;
		s-=r;
		ct++;
	}
	cout<<ct;
	return 0;
}
