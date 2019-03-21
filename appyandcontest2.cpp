#include<bits/stdc++.h>
using namespace std;
long long int gcd1(long long int x,long long int y)
{
	if(y==0)
	return x;

	return gcd1(y,x%y);
}
int main ()
{
long long int t,n,k,l,a,b,a1,b1,j,g,m;
cin>>t;
while(t--)
{
	j=0;
	cin>>n>>a1>>b1>>k;
	a=a1;
	b=b1;
	m=gcd1(a,b);
	g=(a*b)/m;
	l=(n/g);
	j=((n/a)+(n/b))-(2*l);
	if(j>=k)
	cout<<"Win"<<endl;
	else
	cout<<"Lose"<<endl;
}
return 0;
}

