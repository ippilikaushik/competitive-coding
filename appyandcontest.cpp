
#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;
long long int gcd1(long long int x,long long int y)
{
	if(y==0)
	return x;
	else
	return (y,x%y);
}
long long int findLCM(long long int a,long long int b) 
{ 
    long long int lar = max(a, b); 
    long long int small = min(a, b); 
    for (long long int i = lar; ; i += lar) { 
        if (i % small == 0) 
            return i; 
    } 
} 
int main ()
{
long long int t,n,k,l,a,b,a1,b1,c,d,j,m;
cin>>t;
while(t--)
{
	j=1;
	cin>>n>>a1>>b1>>k;
	//m=n;
	/*while(j<=n)
	{
		if(j%a==0&&j%b!=0)
		k--;
        else if (j%b==0&&j%a!=0)
		k--;
		if(j!=n/2)
		{
		
			if(m%a==0&&m%b!=0)
		k--;
			if (m%b==0&&m%a!=0)
		k--;
		}
	    if(k<=0)
	    {
	    	f=1;
	    	break;
		}
		j++;
		m--;
	}*/
	a=max(a1,b1);
	b=min(a1,b1);
	c=findLCM(a,b);
	d=lcm(a,b);
	j=(n/a)+(n/b)-(2*n/d);
	if(j>=k)
	cout<<"Win"<<endl;
	else
	cout<<"Lose"<<endl;
	
}
return 0;
}

