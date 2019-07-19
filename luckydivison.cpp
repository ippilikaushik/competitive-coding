#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=0,c=n,d=0;
	while(c>0)
	{
		int y=c%10;
		d++;
		if(y==4)
		{
		a++;	
		}
		if(y==7)
		{
			b++;
		}
		c=c/10;
	}
	if(d==(a+b))
	cout<<"YES";
	else if(n%4==0||n%7==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
