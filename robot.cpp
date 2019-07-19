
#include<bits/stdc++.h>
using namespace std;

int main ()
{
string s;
int t;
cin>>t;
while(t--)
{
	cin>>s;
	int f2=1;
	for(int i=0;i<s.length();i++)
	{
		int f=0;
		if(s[i]!='.'&&s[i]!='o')
		{
			int x=s[i]-'0';
			int y=x,y1=x;
			while(y>0)
			{
				if((i-y)>=0)
				{
				if(s[i-y]=='.')
				{
					s[i-y]='o';
				}
				else
				{
					f=1;
				}
			}
			y--;
			}
			while(y1>0)
			{
				if((i+y1)<s.length())
				{
				
				if(s[i+y1]=='.')
				{
					s[i+y1]='o';
				}
				else
				{
					f=1;
				}
			}
			y1--;
			}
	}
	if(f)
	{
		cout<<"unsafe"<<endl;
		f2=0;
		goto x;
	}
}
x:
if(f2)
cout<<"safe"<<endl;
}
return 0;
}
