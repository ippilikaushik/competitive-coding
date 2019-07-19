
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,t;
cin>>n;
int a[n]={0};
for(int i=0;i<n;i++)
{
	cin>>t;
	a[t-1]=i+1;
}
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
return 0;
}

