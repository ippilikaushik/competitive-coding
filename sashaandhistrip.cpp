
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,v,s=0;
cin>>n>>v;
n--;
if(n<=v)
{
	cout<<n;
	return 0;
}
s+=v;
n-=v;
int l=2;
while(n--)
{
	s+=l;
	l++;
}
cout<<s;
return 0;
}
