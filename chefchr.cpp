#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int ct1=0,ct2=0,ct3=0,ct4=0;
		cin>>s;
		if(s.length()>=4)
		{
			int ct=0;
		for(int i=0;s[i+3]!='\0';i++)
		{
			ct1=ct2=ct3=ct4=0;
			if(s[i]=='c'||s[i+1]=='c'||s[i+2]=='c'||s[i+3]=='c')
			ct1++;
			if(s[i]=='h'||s[i+1]=='h'||s[i+2]=='h'||s[i+3]=='h')
			ct2++;
			if(s[i]=='e'||s[i+1]=='e'||s[i+2]=='e'||s[i+3]=='e')
			ct3++;
			if(s[i]=='f'||s[i+1]=='f'||s[i+2]=='f'||s[i+3]=='f')
			ct4++;
			if(ct1>=1&&ct2>=1&&ct3>=1&&ct4>=1)
			ct++;
		}
		if(ct>0)
		cout<<"lovely"<<" "<<ct<<endl;
		else
		cout<<"normal"<<endl;
	}
		else
		cout<<"normal"<<endl;
	}
	return 0;
}
