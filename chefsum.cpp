#include<iostream>
using namespace std;
int main()
{
	int t,a[100000],n,presum[100000],sufsum[100000];
	cin>>t;
	while(t--)
	{
		
		int i,x=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			presum[i]=sufsum[i]=0;
		cin>>a[i];
		x+=a[i];}
		i=0;
		presum[0]=a[0];
		sufsum[0]=x;
		for(int j=1;j<n;j++)
		{presum[j]=presum[j-1]+a[j];
		sufsum[j]=x-presum[j-1];
	}
		int minsum=a[0]+x;
		int pos=1;
		while(i<n)
		{
			if((presum[i]+sufsum[i])<minsum)
			{
				minsum=presum[i]+sufsum[i];
				pos=i+1;
			}
			i++;
		}
		cout<<pos<<endl;
	}
	return 0;
}
