
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n;
cin>>n;
string s,s2="";
cin>>s;
if(s.length()%2!=0)
{
s2+=s[0];
s.erase(s.begin());
}
int y=1;
while(s.length()>0)
{
	if(y)
	{
		s2=s[0]+s2;
		s.erase(s.begin());
		y=0;
	}
	else
	{
		s2=s2+s[0];
		s.erase(s.begin());
		y=1;
	}
	
}
cout<<s2;
return 0;
}

