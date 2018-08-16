#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[700][700];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		int m=0;
		int f2=0;	
			for(int j=0;j<n;j++)
			{
				if(a[n-1][j]>m)
				m=a[n-1][j];
			}
			int sum=m,m2=m,f3=0;
		for(int i=n-2;i>=0;i--)
		{
			vector <int> v;
			int f=0;
			for(int k=0;k<n;k++)
			v.push_back(a[i][k]);
			sort(v.begin(),v.end());
			reverse(v.begin(),v.end());
			
			for(int k1=0;k1<n;k1++)
			if(v[k1]<m)
			{
				m=v[k1];
				sum=sum+m;
				f=1;
				break;
			}
			if(f==0)
			{
				cout<<"-1"<<endl;
				f2=1;
			}
		}
		if(!f2)
		cout<<sum<<endl;
			
	}
	return 0;
}
