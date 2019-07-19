
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll n,i,m,l;
cin>>n;
m=n;
ll a[n],b[n-1];
for(i=0;i<n-1;i++)
{
	cin>>b[i];
}
if(b[0]<0)
a[0]=n;
else
a[0]=1;
l=a[0];
x:
for(i=0;i<n-1;i++)
{
	a[i+1]=l+b[i];
	l=a[i+1];
}
ll c[2*(n+1)]={0};
for(i=0;i<n;i++)
{
	c[a[i]]++;
}
int f=1;
for(i=1;i<=n;i++)
{
	if(c[i]!=1)
	{
		f=0;
		break;
	}
}
if(f)
{
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
else
{
	--m;
	l=m;
	a[0]=l;
	if(l!=0)
	goto x;
	cout<<"-1";
}
return 0;
}
