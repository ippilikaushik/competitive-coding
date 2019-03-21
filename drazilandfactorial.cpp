
#include<bits/stdc++.h>
using namespace std;
long long int facval(long long int y)
{
	long long int y1=1,d;
	while(y>0)
	{
		d=y%10;
		for(int h=2;h<=d;h++)
		{
			y1*=h;
		}
		y/=10;
	}
	return y1;
}
bool din(long long int r)
{
	int f;
	while(r>0)
	{
	f=r%10;
	if(f==1||f==0)
	return false;
	r/=10;	
	}
	return true;
}
int main ()
{
long long int y3;
long long int y2;
int n;
cin>>n;
cin>>y2;
long long int u=facval(y2);

while(y3>=y2)
{
	if(din(y3))
	{
		if(facval(y3)==u)
		{
			break;
		}
	}
	y3--;
}
cout<<y3;

return 0;
}

