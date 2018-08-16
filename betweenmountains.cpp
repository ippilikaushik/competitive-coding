#include<iostream>
using namespace std;
int main()
{
	long int v1[1000],v2[1000];
	int t,n1,n2;
	cin>>t;
	while(t--)
	{
		cin>>n1;
		for(int i=0;i<n1;i++)
		{
			cin>>v1[i];
		}
		cin>>n2;
		long int min=1000000;
		for(int j=0;j<n2;j++)
		{
			cin>>v2[j];
			
		}
		for(int k=0;k<n1;k++)
		{
			for(int l=0;l<n2;l++)
			{
				long int x=v1[k]-v2[l];
				if(x<0)
				x=x*(-1);
			if(x>=0&&x<min)
			min=x;
			}
		}
		cout<<min<<endl;
	}
	return 0;
}
