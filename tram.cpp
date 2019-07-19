#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,n=0,h=0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		n-=a;
		n+=b;
		if(n>=h)
		h=n;
	}
	cout<<h;
	return 0;
}
