
#include<bits/stdc++.h>
using namespace std;
bool check(long long int b)
{
	while(b>0)
	{
		int c=b%10;
		if(c%2!=0)
		return false;
		b/=10;
	}
	return true;
}
int main ()
{
long long int x,y;
cin>>x;
y=x;
while(true)
{
	x++;
	y--;
	if(check(x))
	{
		cout<<x;
		break;
	}
	if(check(y))
	{
		cout<<y;
		break;
	}
}
return 0;
}
