
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long int n,m,k,l;
cin>>n>>m>>k;
l=ceil(7*n/10.0);
if((n-m)>=(l-k))
{
	if(l-k>=0)
	cout<<l-k<<endl;
	else 
	cout<<0<<endl;
	
}
else
cout<<"-1"<<endl;
cout<<floor(((n-m+k)*100.0)/n);
return 0;
}

