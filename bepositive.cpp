
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main ()
{
ll n,k,p=0,ne=0;
cin>>n;
k=ceil(n/2.0);
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
	if(a[i]>0)
	p++;
	else if(a[i]<0)
	ne++;
}
if(p>=k)
{
cout<<"1";
return 0;
}
if(ne>=k)
{
	cout<<"-1";
	return 0;
}
cout<<"0";
return 0;
}

