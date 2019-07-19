
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long int q,l,r;
cin>>q;
while(q--)
{
	long int sum=-1;
	cin>>l>>r;
	if(l==r)
	{
		if(l%2==0)
		cout<<l<<endl;
		else
		cout<<"-"<<l<<endl;
	}
	else
	{
		long int k=r-l;
		sum-=(k/2);
		if(l%2!=0&&r%2==0)
		sum*=-1;
		cout<<sum<<endl;
	}
	
}
return 0;
}
