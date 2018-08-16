#include<iostream>
using namespace std;
int main()
{
	float f;
	int ct=0;
	cin>>f;
	while(f!=0.00)
	{
		ct=0;
		float x=0;
		int p=2;
		while(x<f)
		{
			x=x+(1.0/(p++));
			ct++;
		}
		cout<<ct<<" card(s)"<<endl;
		cin>>f;
	}
	return 0;
}
