
#include<bits/stdc++.h>
using namespace std;

int main ()
{

int k,l,m,n,d,x=1,ct=0;
cin>>k>>l>>m>>n>>d;
while(x<=d)
{
	if(x%k==0||x%l==0||x%m==0||x%n==0)
	ct++;
	x++;
}
cout<<ct;
return 0;
}
