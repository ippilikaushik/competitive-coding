#include<iostream>
using namespace std;
int isgud(int b[100000],int n1)
{
	int ct=0;
	for(int k=1;k<=n1;k++)
	if(b[k]!=k)
	ct++;
	if(ct==n1)
	return 1;
	else return 0;
}
int main()
{
	int a[100000],t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		a[i]=i;
		for(int j=1;j<=n;j++)
		{
			if(j!=n)
			{
		if(a[j]==j)
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		else
		{
			if(a[j]==j)
			{
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
			if(isgud(a,n))
			break;
		}
		for(int l=1;l<=n;l++)
		cout<<a[l]<<" ";
		cout<<endl;
	}
	return 0;
}
