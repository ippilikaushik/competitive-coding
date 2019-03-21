
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t,n;
cin>>t;
while(t--)
{
	cin>>n;
	int a[n],d[n];
	for(int y=0;y<n;y++)
	{
		cin>>a[y];
	}
	for(int y=0;y<n;y++)
	{
		cin>>d[y];
	}
	vector<int>v;
	for(int i=1;i<n-1;i++)
	{
		if(d[i]>(a[i-1]+a[i+1]))
		v.push_back(d[i]);
	}
	if(d[0]>(a[n-1]+a[1]))
	v.push_back(d[0]);
	if(d[n-1]>(a[n-2]+a[0]))
	v.push_back(d[n-1]);
	sort(v.begin(),v.end());
	if(v.size()>0)
	cout<<v[v.size()-1]<<endl;
	else
	cout<<"-1"<<endl;
	
}
return 0;
}

