
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,a[100],b[100],i1=0,i2=0;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>a[i];
	b[i]=a[i]%2;
	if(b[i]==0)
	i1++;
	else if(b[i]==1)
	i2++;
}
int i,x;
if(i1==1)
x=0;
else if(i2==1)
x=1;


for(i=0;i<n;i++)
{ 
	if(x==b[i])
	break;
}
cout<<i+1;
return 0;
}

