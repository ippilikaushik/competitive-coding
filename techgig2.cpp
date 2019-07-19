
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t,n;
cin>>t;
while(t--)
{
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	long long int ma=LONG_MIN;
	long long int j,s;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		j=i;
		s=a[j];
		vector<int> v1;
		v1.push_back(a[j]);
		j+=2;
		while(j<n)
		{
			if(a[j]>0)
			{
				s+=a[j];
				v1.push_back(a[j]);
			}
			j+=2;
		}
		if(s>ma)
		{
			ma=s;
			v.clear();
			for(int i=0;i<v1.size();i++)
			{
				v.push_back(v1[i]);
			}
		}
		v1.clear();
	}
	for(int i=v.size()-1;i>=0;i--)
	cout<<v[i];
	cout<<endl;
}
return 0;
}

