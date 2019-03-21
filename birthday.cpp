
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int k,l,m,n,x=1,f=0;
cin>>n>>m>>k>>l;
if(n<m)
{
	cout<<"-1";
	return 0;
}
if((n-k)<m)
{
	
	cout<<"-1";
	return 0;
}
x=ceil(n/m);
while(x>1)
{
if((m*x)-k)
if(abs((m*x)-k)>=abs((m*x)-l))
{
f=1;
x--;
}
}
if(f)
cout<<x;
else
cout<<"-1";
return 0;
}
