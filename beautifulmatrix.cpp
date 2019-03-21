#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i1,j1,l,n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>l;
			if(l==1)
			{
				i1=i;
				j1=j;
			}
		}
	}
		int r=abs(i1-2)+abs(j1-2);
		cout<<r;
		return 0;

}
