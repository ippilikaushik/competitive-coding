
#include<bits/stdc++.h>
using namespace std;

int main ()
{

int n,a,b,max=0;
cin>>n;
while(n--)
{
	cin>>a>>b;
	if((a+b)>max)
	max=a+b;
}
cout<<max;

return 0;
}

