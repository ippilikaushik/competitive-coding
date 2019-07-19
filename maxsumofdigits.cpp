
#include<bits/stdc++.h>
using namespace std;

int main ()
{
long long int n,n1,n2,n3,n4,ct=0,ct2=0;
cin>>n;
if(n%2==0)
{
	n1=n/2;
	n1--;
}
else
{
	n1=n/2;
}
while(n1>0)
{
n2=n-n1;
n3=n1;
n4=n2;
ct=0;
while(n3>0||n4>0)
{
	int d=n3%10;
	int d1=n4%10;
	ct+=d;
	ct+=d1;
	n3=n3/10;
	n4=n4/10;
}
if(ct>=ct2)
ct2=ct;
n1--;
}

cout<<ct2;
return 0;
}
