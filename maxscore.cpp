#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t,n;
	
	cin>>t;
	while(t--)
	{
		vector <int> s;
		int n1;
		cin>>n;
		int n2=n;
		while(n2--)
		{
			int f=0,m=0;
		for(int i=0;i<n;i++)
		{
			cin>>n1;
			if(n1>m)
			{
			m=n1;
		}
	}
			s.push_back(m);
		
		
	}
	int f2=1;
	for(int j=0;j<n-1;j++)
	{
		if(s[j]>s[j+1])
		f2=0;
	}
	sort(s.begin(),s.end());
	int f=1;
	for(int i=0;i<n-1;i++)
	if(s[i]==s[i+1])
	f=0;
	if(f&&f2)
	cout<<accumulate(s.begin(),s.end(),0)<<endl;
	else
	cout<<"-1"<<endl;
	}
	return 0;
}
