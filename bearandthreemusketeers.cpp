
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,t,a,b,x,y,z,ct=99999999,f1=1;
cin>>n>>t;
int k[n+1][n+1]={0},u[n+1]={0};
while(t--)
{
	cin>>a>>b;
	k[a][b]=1;
	k[b][a]=1;
	u[a]++;
	u[b]++;
}
vector<int>f;
for(int i=1;i<n+1;i++)
{
	if(u[i]>=2)
	f.push_back(i);
}
if(f.size()<3)
{
	f1=0;
	goto en;
}
sort(f.begin(),f.end());
for(int i=0;i<f.size()-2;i++)
for(int j=i+1;j<f.size()-1;j++)
if(k[f[i]][f[j]])
for(int m=j+1;m<f.size();m++)
{
	x=f[i];
	y=f[j];
	z=f[m];
	if(k[x][y]==1&&k[x][z]==1&&k[y][z]==1)
	{
		int ct2=0;
		ct2+=(u[x]-2);
		ct2+=(u[y]-2);
		ct2+=(u[z]-2);
		if(ct2<ct)
		ct=ct2;
		
	}
}
en:
	if(f1&&ct!=99999999)
	cout<<ct;
	else
	cout<<"-1";
	return 0;
}
