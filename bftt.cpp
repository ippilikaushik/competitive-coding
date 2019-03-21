#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int noy(long int u)
{
	int y1=0;
	while(u>0)
		{
			int k=u%10;
			if(k==3)
			{
				y1++;
			}
			u=u/10;
		}
		return y1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,j;
	long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int y=0,x=0;
		n++;
		while(1)
		{
			j=noy(n);
			if(j>=3)
			{
			  break;
		    }
			n++;
		}
		cout<<n<<endl;
	}
	return 0;
}
