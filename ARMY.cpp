#include<iostream>
using namespace std;
int findlow(int a[100000],int x)
{
	int k=a[0];
	for(int j=1;j<x;j++)
	if(a[j]<k)
	k=a[j];
	return k;
}
int findind(int m1[100000],int y)
{
	for(int i1=0;i1<100000;i1++)
	if(m1[i1]==y)
	return i1;
}

int main()
{
	int t,nm,ng,m[100000],g[100000];
	cin>>t;
	while(t--)
	{
		int ct1=0,ct2=0;
		cout<<endl;
		cin>>ng>>nm;
		for(int i=0;i<ng;i++)
		cin>>g[i];
		for(int l=0;l<nm;l++)
		cin>>m[l];
		while(ct1!=ng&&ct2!=nm)
		{
			if(findlow(g,ng)<findlow(m,nm))
			{
				g[findind(g,findlow(g,ng))]=99999;
				ct1++;
			}
			else if(findlow(g,ng)>findlow(m,nm))
			{
				m[findind(m,findlow(m,nm))]=99999;
				ct2++;
			}
			else{
				m[findind(m,findlow(m,nm))]=99999;
				ct2++;
			}
		}
		
		if(ct1==ng)
		cout<<"MechaGodzilla"<<endl;
		if(ct2==nm)
		cout<<"Godzilla"<<endl;
	}
	return 0;
}
