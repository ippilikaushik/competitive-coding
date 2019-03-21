
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n;
cin>>n;
int a[n]={0},b[n+1]={0},c[n+1]={0};
for(int i=0;i<n;i++)
{
	cin>>a[i];
	b[a[i]]++;
}
int x,y,n1=n-1;
while(n1--)
{
	cin>>x>>y;
	c[x]++;c[y]++;
}
for(int i=1;i<n+1;i++)
{
	if(b[i]>1&&c[i]>1)
	{
		cout<<i;
		return 0;
	}
}
cout<<"-1";
return 0;
}

