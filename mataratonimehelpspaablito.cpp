
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
} 
int main ()
{
long int t;
long long a,b;
cin>>t;
while(t--)
{
	cin>>a>>b;
	long long y=min(a,b);
	long long x=max(a,b);
	long long h=gcd(x,y);
	/*int f=0;
	while(k>=2&&k1<=y)
	{
		if((a%k==0)&&(b%k==0))
		{
			f=1;
			break;
		}
		if((a%k1==0)&&(b%k1==0))
		{
			f=1;
			break;
		}
		k1++;
		k--;
	}*/
	if(h>1)
	cout<<"Sim"<<endl;
	else
	cout<<"Nao"<<endl;
	
}
return 0;
}
