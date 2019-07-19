
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
ll ans=0;
for(ll i=0;i<n-1;i++)
{
	if((a[i+1]-a[i])<0)
	ans+=(a[i]-a[i+1]);
}
cout<<ans;
return 0;
}
