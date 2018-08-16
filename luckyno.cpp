#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ct=0,i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='7'||s[i]=='4')
		ct++;
		i++;
    }
	int f=1;
	if(ct==0)
	f=0;
	while(ct>0)
	{
		int x=ct%10;
		if((x!=7)&&(x!=4))
		{
			f=0;
			break;
		}
		ct=ct/10;
	}
	if(f)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
