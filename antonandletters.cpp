
#include<bits/stdc++.h>
using namespace std;

int main ()
{
string s="";
char c;
cin>>c;
while(c!='}')
{
	cin>>c;
	s+=c;
}

int a[26]={0};
for(int i=0;i<s.length();i++)
{
	 
	 if(((int)s[i]>=97)&&((int)s[i]<=122))
	{
		a[(int)s[i]-97]++;
	}
}
int ct=0;
for(int i=0;i<26;i++)
{

	if(a[i]>0)
	ct++;
}
cout<<ct;
return 0;
}

