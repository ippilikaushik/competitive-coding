#include<bits/stdc++.h>
using namespace std;
int main ()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long int n,k,ct=0;
cin>>n>>k;
long long int a[n];
vector<long long int> v;
for(long long int i=0;i<n;i++)
{
	cin>>a[i];
	v.push_back(a[i]);
}
sort(a,a+n);
sort(v.begin(),v.end());
for(long long int i=0;i<v.size();i++)
{
	for(long long int j=i+1;j<v.size();j++)
	{
		if((v[i]+v[j])%k==0)
		{
			ct++;
	        v.erase(v.begin()+j);
	        v.erase(v.begin()+i);
	        if(i==0)
	        i=-1;
			break;
		}
	}
	if(v.size()==0&&v.size()==1)
	break;
}
cout<<ct*2;
return 0;
}
