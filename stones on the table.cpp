#include<iostream>
using namespace std;
int main()
{
	int n,ct=0;
	cin>>n;
	char a[n];
	cin>>a;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		ct++;
	}
	cout<<ct;
	return 0;
}
