
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,l=0,ct=0,k=0,s=0;
cin>>n;
while(s<n)
{
	ct++;
	l=l+(++k);
	s+=l;
}
if(s>n)
ct--;
cout<<ct;
return 0;
}
