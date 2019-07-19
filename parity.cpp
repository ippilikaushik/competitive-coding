
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
ll n,n1,k,k1,s=0;
cin>>k>>n;
n1=n;
while(n--)
{
	
	cin>>k1;
	--n1;
	s+=(k1*pow(k,n1));
}
if(s%2==0)
cout<<"even";
else
cout<<"odd";
return 0;
}
