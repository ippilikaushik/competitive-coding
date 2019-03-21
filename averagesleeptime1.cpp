
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long n,l,k,i1=0,m=1,m1;
long double sum=0;
cin>>n>>k;
long long a[n];
while(i1<n)
{
	cin>>a[i1];
	i1++;
}
for(int i=0;i<=n-k;i++)
{
	sum=sum+(a[i]*m);
	if(m<k)
	{
		m++;
	}
}
m--;
m1=m;
for(int j=n-k+1;j<n;j++)
{
	sum=sum+(a[j]*m);
	if(m>1&&j>=(n-m1))
	{
		m--;
	}
}
cout<<fixed<<setprecision(10)<<sum/(long double)(n-k+1);
return 0;
}

