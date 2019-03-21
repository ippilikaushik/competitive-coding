
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long int a,b,s;
cin>>a>>b>>s;
a=abs(a);
b=abs(b);
if(s>=a+b)
{
	if((s-a-b)%2==0)
	{
		cout<<"Yes";
	}
	else
	cout<<"No";
}
else
cout<<"No";
return 0;
}


