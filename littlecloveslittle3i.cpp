
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,i=1,j=1;
cin>>n;
for(i=1;i<=n-2;i++)
if(i%3!=0)
{
for(j=1;j<=n-2;j++)
if(((n-i-j)%3!=0))
{
goto x;
}
}

x:
	cout<<i<<" "<<j<<" "<<n-i-j;
	
return 0;
}
