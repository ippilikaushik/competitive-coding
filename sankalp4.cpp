
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	b[i]=a[i];
}
sort(b,b+n);
reverse(b,b+n);
for(int i=0;i<n-1;i++)
for(int j=i+1;j<n;j++)
if(b[j]!=-1)
if(b[j]==b[i])
{
	b[j]=-1;
}
int k;
cin>>k;
for(int i=0;i<n;i++)
{
	if(b[i]!=-1)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]==b[i])
			{
			 cout<<j<<" "<<endl;
		}
		}
		k--;
		if(k==0)
		break;
	}
}
return 0;
}

