#include<iostream>
using namespace std;
int findmax(int a[100000],int x)
{
	int k=a[0];
	for(int j=1;j<x;j++)
	if(a[j]>k)
	k=a[j];
	return k;
}
int main()
{
	int t,ng,nm;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		cin>>ng>>nm;
		int g[ng],m[nm];
			for(int i=0;i<ng;i++)
		cin>>g[i];
		for(int l=0;l<nm;l++)
		cin>>m[l];
		if(ng==0)
		cout<<"MechaGodzilla"<<endl;
		else if(nm==0)
		cout<<"Godzilla"<<endl;
		else if(findmax(g,ng)>findmax(m,nm))
		cout<<"Godzilla"<<endl;
		else if(findmax(m,nm)>findmax(g,ng))
		cout<<"MechaGodzilla"<<endl;
		else
		cout<<"Godzilla"<<endl;
		
	}
	return 0;
}
