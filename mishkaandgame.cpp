
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,ct1=0,ct2=0,b,a;
cin>>n;
while(n--)
{
	cin>>a>>b;
	if(a>b)
	ct1++;
	else if(b>a)
	ct2++;
}
if(ct1>ct2)
cout<<"Mishka";
else if(ct2>ct1)
cout<<"Chris";
else
cout<<"Friendship is magic!^^";
return 0;
}

