#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		int p=0,q=0,f=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
            p++;
            if(f)
			{
			if(p==k)
			{
			 q=i;
			 f=0;
		    }
		}
		}
		if(p<k)
		cout<<"2"<<endl;
		else
		{
		int r=0,s=0,s1=0;
		for(int l=0;l<n;l++)
		{
			if(r%2==0)
			{
			s+=a[l];
			s1-=a[l];
		}
		else
		{
			s-=a[l];
			s1+=a[l];
		}
		r++;
		}
		if(abs(s)>=k||abs(s1)>=k)
		cout<<"1"<<endl;
		else
		cout<<"0"<<endl;
		}
		
	}
	return 0;
}
