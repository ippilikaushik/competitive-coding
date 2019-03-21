#include<iostream>
using namespace std;
int main()
{
	int n,a,b,ct=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if((b-a)>=2)
		ct++;
	}
	cout<<ct;
	return 0;
}
