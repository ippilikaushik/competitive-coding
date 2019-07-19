
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main ()
{
ll q,n,a,b;
cin>>q;
while(q--)
{
	cin>>n>>a>>b;
	if(2*a<=b)
	{
		cout<<n*a<<endl;
	}
	else
	cout<<((n/2)*b)+((n%2)*a)<<endl;
	
}
return 0;
}
