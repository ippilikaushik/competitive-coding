
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool fun(ll n)
{
	int k,f=1;
	while(n>0)
	{
		k=n%10;
		n/=10;
		if(k==4)
		{
			f=0;
			break;
		}
	}
	if(f)
	return true;
	else
	return false;
}
int main ()
{
ll n,t,a,b,t1=1;
cin>>t;
while(t1<=t)
{
	cin>>n;
	if(n%2!=0)
	{
		a=n/2;
		b=n/2;
		b++;
	}
	else{
		a=n/2;
		b=n/2;
	}
	while((!fun(a))&&(!fun(b)))
	{
		b+=(a/2);
		
		if(a%2!=0)
		{
			
			a++;
		}
	a/=2;
	}
	cout<<"Case #"<<t1<<": "<<a<<" "<<b<<endl;
	t1++;
}
return 0;
}

