#include<iostream>
using namespace std;
int main()
{
	int n,c,ct=0;
	cin>>n;
	int a[n][3];
	for(int i=0;i<n;i++)
	{
		c=0;
		cin>>a[i][0]>>a[i][1]>>a[i][2];
		if(a[i][0]==1)
		c++;
		if(a[i][1]==1)
		c++;
		if(a[i][2]==1)
		c++;
		if(c>=2)
		ct++;
	}
	cout<<ct;
	return 0;
}
