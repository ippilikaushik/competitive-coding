
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long t,n,a,b,c;
cin>>t;
while(t--)
{
	cin>>n;
	a=1;b=0;c=0;
	while(true)
	{
		if(n-2>0)
		{
			b+=a;
			a=0;
			n-=2;
		}
		if(n-8>0)
		{
			c+=b;
			b=0;
			n-=8;
		}
		if(n-16>0)
		{
			a+=(2*c);
			c=0;
			n-=16;
		}
		if(n<=2)
		{
			break;
		}
		
	}
	cout<<a<<" "<<b<<" "<<c<<endl;

}
return 0;
}

