#include<iostream>
using namespace std;
int main()
{
	int n;
	string s1,s2;
	cin>>n;
	while(n--)
	{
		int ct1=0;
		cin>>s1;
		cin>>s2;
		if(s1[0]=='b'||s2[0]=='b')
		{
			if(s1[1]=='o'||s2[1]=='o')
			{
				if(s1[2]=='b'||s2[2]=='b')
				ct1++;
			}
		}
		if(s1[0]=='o'||s2[0]=='o')
		{
			if(s1[1]=='b'||s2[1]=='b')
			{
				if(s1[2]=='b'||s2[2]=='b')
				ct1++;
			}
		}
		if(s1[0]=='b'||s2[0]=='b')
		{
			if(s1[1]=='b'||s2[1]=='b')
			{
				if(s1[2]=='o'||s2[2]=='o')
				ct1++;
			}
		}
		if(ct1)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
}
return 0;
}
