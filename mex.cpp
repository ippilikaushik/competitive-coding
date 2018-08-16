#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector <int> g;
		int u,x=0;
		for(int i=0;i<n;i++)
		{
			cin>>u;
			g.push_back(u);
		}
		sort(g.begin(),g.end());
		int y=*g.end();
		for(std::vector<int>::iterator it=g.begin();it!=g.end();it++)
		{
			
			if(*it!=x)
			{
			if(k>0)
			{
				k--;
			goto x1;
			
		}
			else
			break;
		}
		x1:
			x++;
		}
		if(k>0)
		{
			x++;
			k--;
		}
		cout<<x<<endl;
	}
	return 0;
}

