#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n,a,b,c,d;
	cin>>n1;
	n1++;
	while(1)
	{
		n=n1;
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		c=n%10;
		n=n/10;
		d=n%10;
		if(d!=c&&d!=b&&d!=a)
		  if(c!=b&&c!=a)
		    if(b!=a)
		      break;
		n1++;
	}
	cout<<n1;
	return 0;
	}
