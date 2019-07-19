
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll t,n,m,i,j,k;
cin>>t;
while(t--)
{
	cin>>n>>m;
	ll a[n][m];
	ll s[m]={0};
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>a[i][j];
	for(j=0;j<m;j++)
	{
		for(i=j;i<n;i++)
		{
			s[j]+=a[i][j];
		}
	}
	
	k=0;
	for(i=0;i<m;i++)
	{
		cout<<s[i]<<"&";
		k=max(k,s[i]);
		 
	}
	cout<<k<<endl;
}
return 0;
}
