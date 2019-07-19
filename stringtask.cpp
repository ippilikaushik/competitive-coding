#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1;
	cin>>s1;
	s="";
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='y')
		continue;
		else
		{s=s+'.';
		s=s+s1[i];
	}
	}
	cout<<s;
	return 0;

}
