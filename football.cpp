#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int f=0;
	for(char i='0';i<='1';i++)
	{
		int n=0;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]==i)
			{
				n++;
			}
			if(n==7)
			{
				f=1;
				break;
			}
			if(s[j]!=i)
			{
				n=0;
			}
		}
	}
	if(f)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
