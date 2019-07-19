
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll n,n1,t,t1=1;
string s;
cin>>t;
while(t1<=t)
{
cin>>s;
char s1[s.length()];
for(int i=0;i<s.length();i++)
s1[i]='0';
for(int i=0;i<s.length();i++)
{
	if(s[i]=='4')
	{
		s[i]='2';
		s1[i]='2';
	}
}
cout<<"Case #"<<t1<<": "<<s<<" ";
int f=0;
for(int i=0;i<s.length();i++)
{
	if(!f)
	{
	if(s1[i]!='0')
	{
		f=1;
		cout<<s1[i];
	}
    }
    else
    {
    	cout<<s1[i];
	}
}
cout<<endl;
t1++;
}
return 0;
}

