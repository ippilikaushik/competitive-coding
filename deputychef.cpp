
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int t,n;
cin>>t;
while(t--)
{
	cin>>n;
	int a[n],d[n];
	int u[n]={0};
	for(int y=0;y<n;y++)
	{
		cin>>a[y];
	}
	for(int y=0;y<n;y++)
	{
		cin>>d[y];
	}
	vector<int>v;
	for(int i=1;i<n-1;i++)
	{
		if(u[i-1]==0&&u[i+1]==0)
		{
		if(d[i]>(a[i-1]+a[i+1]))
		 {
		 v.push_back(i);
		 u[i-1]=1;
		 u[i+1]=1;
	     }
	 }
	 else if(u[i-1]==0)
	 {
	 	if(d[i]>a[i-1])
	 	{
	 		v.push_back(i);
	 		u[i-1]=1;
		 }
	 }
	 else if(u[i+1]==0)
	 {
	 		if(d[i]>a[i+1])
	 	{
	 		v.push_back(i);
	 		u[i+1]=1;
		 }
	 }
	}
	/*if(d[0]>(a[n-1]+a[1]))
	v.push_back(0);
	if(d[n-1]>(a[n-2]+a[0]))
	v.push_back(n-1);*/
		if(u[n-1]==0&&u[1]==0)
		{
		if(d[0]>(a[n-1]+a[1]))
		 {
		 v.push_back(0);
		 u[n-1]=1;
		 u[1]=1;
	     }
	 }
	 else if(u[n-1]==0)
	 {
	 	if(d[0]>a[n-1])
	 	{
	 		v.push_back(0);
	 		u[n-1]=1;
		 }
	 }
	 else if(u[1]==0)
	 {
	 		if(d[0]>a[1])
	 	{
	 		v.push_back(0);
	 		u[1]=1;
		 }
	 }
			if(u[0]==0&&u[n-2]==0)
		{
		if(d[n-1]>(a[n-2]+a[0]))
		 {
		 v.push_back(n-1);
		 u[n-2]=1;
		 u[0]=1;
	     }
	 }
	 else if(u[0]==0)
	 {
	 	if(d[n-1]>a[0])
	 	{
	 		v.push_back(n-1);
	 		u[0]=1;
		 }
	 }
	 else if(u[n-2]==0)
	 {
	 		if(d[n-1]>a[n-2])
	 	{
	 		v.push_back(n-1);
	 		u[n-2]=1;
		 }
	 }
	if(v.size()>0)
	cout<<d[v[0]]<<endl;
	else
	cout<<"-1"<<endl;
	
}
return 0;
}

