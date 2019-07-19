
#include<bits/stdc++.h>
using namespace std;
bool compare(string &s1,string &s2) 
{ 
    return s1.size() < s2.size(); 
} 
int main ()
{
int n,k,h,i=0,t=0,s1=0;
cin>>n>>k;
string s[n],s2[n],p;
for(int i=0;i<n;i++)
{
	cin>>s[i];
	s2[i]=s[i];
}
cin>>p;
h=p.length();
sort(s2,s2+n,compare);
while(s2[i].length()!=h)
{
t++;
s1++;
if(s1==k)
{
	t+=5;
	s1=0;
}
i++;	
}
int ct2=0;
for(int i=0;i<n;i++)
{
	if(s[i]==p)
	ct2++;
}
ct2--;
int r=(n-i-ct2),l=0;
cout<<t+1<<" ";
int f=0;
while(r--)
{
	t++;
	l++;
	f=0;
	if(l==k)
	{
		t+=5;
		l=0;
		f=1;
	}
}
if(f)
cout<<t-5;
else
cout<<t;
return 0;
}
