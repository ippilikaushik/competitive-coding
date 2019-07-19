
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long int n,a,b,a1,b1;
	cin>>n>>a>>b;
	a1=min(a,b);
	b1=max(a,b);
	n=6*n;
	a=min(a,b);
	b=max(a,b);
	if(sqrt(n)>(a*b))
	{
		a=sqrt(n);
		b=sqrt(n);
	}
	while((a*b)<n)
	{
	
	    if(((b+1)*a)>=n||((a+1)*b)>=n)
		{
		if(((a+1)*b)<=((b+1)*a))
		a++;
		else //if(((b+1)*a)>=n)
		b++;
	    }
	   else if(((a+1)*(b+1))>=n)
		{
			a++;
			b++;
		}
		else
		{
			a++;
		}
	}
	if(n%(a1*b1)==0)
	{
		cout<<n<<endl;
		cout<<a1<<" "<<n/b1;
		return 0;
	}
	cout<<a*b<<endl;
	cout<<a<<" "<<b;
	return 0;
}

