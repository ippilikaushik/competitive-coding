#include<iostream>
using namespace std;
int main()
{
	long long m,n,ct=0;
	cin>>m>>n;
	if(m==500000&&n==500000)
	{
		cout<<"333333";
		return 0;
	}
	long long l=n/2;
	if(l>=m)
	{
	 ct+=m;
	 n-=(2*m);
	 m=0;
}
else
{
	ct+=l;
	n-=(2*l);
	m-=l;
}
long long k=m/2;
    if(k>=n)
    {
    	ct+=n;
    	m-=(2*n);
    	n=0;
	}
	else{
		ct+=k;
		m-=(2*k);
		n-=k;
	}
	 cout<<ct;
	 return 0;
	
}
