
#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s;
cin>>s;
if(s.length()<3)
{
	cout<<s;
	return 0;
}
for(int i=0;i<s.length()-2;i++)
{
	if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
	{
		s[i]=' ';
		s[i+1]=' ';
		s[i+2]=' ';
	}
}

for(int y=0;y<s.length();y++)
{
 if(s[y]!=' ')
 {
 	while(s[y]!=' '&&y<s.length())
 	{
	 cout<<s[y];
 	y++;
 }
 cout<<" ";
 }
}

return 0;
}


