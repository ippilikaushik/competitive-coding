
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int s,n,x,y;
cin>>s>>n;
multimap <int,int> mp;
for(int i=0;i<n;i++)
{
 cin>>x>>y;
 mp.insert(pair <int,int> (x,y));
}
multimap <int,int>:: iterator i;
int ct=0;
	for(i=mp.begin();i!=mp.end();++i)
	{
		//cout<<i->first<<" "<<(int)i->second<<" ";
		if(s> i->first)
		{
			s=s+ i->second;
			ct++;
		}
		//cout<<s<<" ";
	}
if(ct==n)
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}
return 0;
}
