
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,k,l;
cin>>n>>k;
vector<int>v;
for(int i=0;i<n;i++)
{
	cin>>l;
	v.push_back(l);
}
int ct=0,i=0,j=n-1;
while(true)
{
if(v.size()==0)
break;
if(v[i]==0||v[j]==0)
break;
	if(v[i]<=k)
	{
		ct++;
		v[i]=0;
		i++;
	}
	else if(v[j]<=k)
	{
		ct++;
		v[j]=0;
		j--;
	}
	if(v[i]>k&&v[j]>k)
	break;
}
cout<<ct;
return 0;
}
