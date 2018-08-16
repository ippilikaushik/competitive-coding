#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int max=0;
		for(int j=0;j<n;j++)
		{
			int y=n-j;
			for(int k=n-1;k>=0;k--)
			{
				if(a[j]>a[k])
				{
					break;
				}
				else
				{
					y--;
				}
			}
			if(y>max)
			{
				max=y;
			}
			if(max==n-j)
			break;
		}
		if(max>0)
		cout<<max<<endl;
		else
		cout<<"1"<<endl;
	}
}
