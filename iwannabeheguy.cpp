
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,p,q,r;
cin>>n;
cin>>p;
vector<int>v;
for(int i=0;i<p;i++)
{
	cin>>r;
	v.push_back(r);
}
cin>>q;
for(int i=0;i<q;i++)
{
	cin>>r;
	v.push_back(r);
}
if(p==0&&q==0)
{
	cout<<"Oh, my keyboard!";
	return 0;
}
sort(v.begin(),v.end());
v.erase( unique( v.begin(), v.end() ), v.end() );

int u=1,f=0;
while(u<=n)
{
	if(v[u-1]!=u)
	{
		f=1;
		break;
	}
	u++;
}
if(f)
{
	cout<<"Oh, my keyboard!";
}
else
{
	cout<<"I become the guy.";
}
return 0;
}
