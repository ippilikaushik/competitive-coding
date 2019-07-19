
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
string s1,s2;
int a[26]={0};
int b[26]={0};
cin>>s1>>s2;
for(int i=0;i<s1.length();i++)
a[s1[i]-'a']++;
for(int i=0;i<s2.length();i++)
b[s2[i]-'a']++;
int f=1;
for(int i=0;i<26;i++)
{
	if(a[i]!=b[i])
	{
		f=0;
		break;
	}
}
if(f)
cout<<"yes";
else
cout<<"no";
return 0;
}
