
#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s;
getline(cin,s);
char c;
for(int i=0,j=s.length()-1;i<s.length()/2&&j>=s.length()/2;i++,j--)
{
	while(!(s[i]<='z'&&s[i]>='a'))
	{
		i++;
	}
	while(!(s[j]<='z'&&s[j]>='a'))
	{
		j--;
	}
	if(i<s.length()/2&&j>=s.length()/2)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
}
cout<<s;
return 0;
}
