
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

string s1,s2;
long int ct=0,n;
cin>>n;
cin>>s1>>s2;
long int p1=-1,p2=-1;
vector<long int>v;
for(long int k=0;k<s1.length();k++)
{
	if(s1[k]!=s2[k])
	{
	 v.push_back(k);
	 ct++;
    }
}
long int ct3=ct;
for(long int i=0;i<v.size();i++)
{
	for(long int j=i+1;j<v.size();j++)
	{
		long int ct1=ct3;
	 if(s1[v[j]]==s2[v[i]])
	 ct1--;
	  if(s1[v[i]]==s2[v[j]])
	 ct1--;
	 if(ct1<ct)
	 {
	 	ct=ct1;
	 	p1=v[i]+1;
	 	p2=v[j]+1;
	 }
	 if(ct1==(ct3-2))
	 goto g;
	}
}
g:
cout<<ct<<endl;
cout<<p1<<" "<<p2;
return 0;
}

