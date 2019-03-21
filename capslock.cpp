#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c1=0;
	int y=s.length();
	for(int u=0;u<s.length();u++)
	{
		if(isupper(s[u]))
		c1++;
	}
	if(islower(s[0])&&(c1==y-1))
	{
		cout<<(char)toupper(s[0]);
		for(int i=1;i<y;i++)
		cout<<(char)tolower(s[i]);
	}
	else if(c1==y)
	{
		for(int i=0;i<y;i++)
		cout<<(char)tolower(s[i]);
	}
	else
	cout<<s;
	return 0;
}
