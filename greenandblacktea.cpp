
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,k,a,b,a1,b1,z,f1=0;
cin>>n>>k>>a>>b;
a1=a;
b1=b;
if(a1<b1)
	swap(a1,b1);
z=(a1-1)/k+1;
if(z>b1+1)
	return cout<<"NO", 0;
string s;
if(a>b)
{
	for(int i=0;i<n;i++)
	{
		s[i]='G';
	}
}
else
{
	for(int i=0;i<n;i++)
	{
		s[i]='B';
		f1=1;
	}
}
int u=k,v=min(a,b);
char c1,c2;
if(f1)
{
	c1='G';
	c2='B';
}
else
{
	c1='B';
	c2='G';
}
while((v--)&&(u<n))
{
s[u]=c1;
u++;
u+=k;
}
int f7=1,s2=0;
for(int i=0;i<n;i++)
{
	if(s[i]==c2)
	s2++;
	if(s[i]==c1)
	{
		if(s2<=k)
		{
			s2=0;
		}
		else
		{
			f7=0;
			goto d;
		}
	}
}
if(s2>k)
f7=0;
d:
	if(f7)
{
for(int i=0;i<n;i++)
cout<<s[i];
}
else
cout<<"NO";
return 0;
}

