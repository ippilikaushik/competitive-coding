
#include<bits/stdc++.h>
using namespace std;

int main ()
{
std::cout << std::fixed;
    std::cout << std::setprecision(9);
int n;
long long l,t;
cin>>n>>l;
vector<long long>v;
for(int i=0;i<n;i++)
{
	cin>>t;
	v.push_back(t);
}

sort(v.begin(),v.end());
double d=0;
for(int i=0;i<n-1;i++)
{
	long long y1=v[i+1]-v[i];
	if(y1>d)
	d=y1;
}
int f1=0,f2=0,g=0,e=0;
if(v[0]==0)
f1=1;
if(v[n-1]==l)
f2=1;
if(!f1)
{
	if((v[0]-0)>d/2.0)
	{
		d=v[0];
		g=1;
		e=1;
	}
}
if(!f2)
{
	if(!e)
	{
	if((l-v[n-1])>d/2.0)
	{
		d=l-v[n-1];
		g=1;
	}
}
else
{
	if((l-v[n-1])>d)
	{
		d=l-v[n-1];
		g=1;
	}
}
}


if(!g)
cout<<d/2.0;
else
cout<<d/1.0;
return 0;
}
