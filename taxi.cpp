#include<iostream>
using namespace std;
int main()
{
	int n,a[5]={0};
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		a[b[i]]++;
	}
	int ct=0;
	ct+=a[4];
	a[4]=0;
	if(a[3]>a[1])
	{
		ct+=a[1];
		
		a[3]-=a[1];
		a[1]=0;
	}
	else
	{
		ct+=a[3];
	
		a[1]-=a[3];
			a[3]=0;
	}
	ct+=a[3];
	
	while(a[2]!=1&&a[2]!=0)
	{
		a[2]-=2;
		ct++;
	}
	while(a[2]>0)
	{
		if(a[1]>=2)
		{
			a[2]--;
			a[1]-=2;
			ct++;
		}
		else if(a[1]>0)
		{
			a[2]--;
			a[1]--;
			ct++;
		}
		break;
	}
	while(a[2]>0)
	{
		ct++;
		a[2]--;
	}
	while(a[1]>4)
	{
		a[1]-=4;
		ct++;
}
	if(a[1]>0)
	ct++;
	cout<<ct;
	
}
