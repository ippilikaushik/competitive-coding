
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t,n;
cin>>t;
while(t--)
{
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	char c='a';
	int h=0;
	while(c<='z')
	{
		int k=0;
		for(int i=0;i<n;i++)
		{
			size_t found=a[i].find(c);
			 if (found!=std::string::npos)
			 k++;
		}
		if(k==n)
		h++;
		c++;
	}
	cout<<h<<endl;
}
return 0;
}

