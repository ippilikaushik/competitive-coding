
#include<bits/stdc++.h>
using namespace std;
int nof(int a[1000],int n)
{
	int ct=0;
	for(int i=0;i<n;i++)
	if(a[i]!=-1)
	ct++;
	return ct;
}
int main ()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
while(nof(a,n)!=0)
{
	int x=100000;
	for(int j=0;j<n;j++)
	{
		if(a[j]!=-1)
		{
			x=min(x,a[j]);
		}
	}
	for(int j=0;j<n;j++)
	{
		if(a[j]!=-1)
		{
			a[j]-=x;
			if(a[j]<=0)
			{
				a[j]=-1;
			}
		}
	}
	cout<<nof(a,n)<<endl;
}
return 0;
}

