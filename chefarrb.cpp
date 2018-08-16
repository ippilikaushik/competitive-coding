#include<iostream>
using namespace std;
int main()
{
	long int a[100000],k;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		cin>>a[i];
		int ct=0;
		for(int j=0;j<n;j++)
		for(int l=j;l<n;l++)
		if((a[j]|a[l])>=k)
		ct++;
		cout<<ct<<endl;
	 } 
	 return 0;
}
