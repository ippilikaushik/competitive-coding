#include<iostream>
using namespace std;
int main()
{
	string s;
	int t,x=0;
	cin>>t;
	while(t--)
	{
		cin>>s;
		if((s[0]=='+'&&s[1]=='+')||(s[1]=='+'&&s[2]=='+'))
		x++;
			if((s[0]=='-'&&s[1]=='-')||(s[1]=='-'&&s[2]=='-'))
		x--;
		
		
	}
	cout<<x;
	return 0;
}
