
#include<bits/stdc++.h>
using namespace std;
long long int mincon(int x)
{
	if(x==0)
	return 0;
	if(x<0)
	return 100000;
	return min((1+mincon(x-9)),min(min((1+mincon(x-6)),(1+mincon(x-5))),(1+mincon(x-1))));
}
int main ()
{
int y,t;
cin>>t;
while(t--)
{
cin>>y;
cout<<mincon(y)<<endl;
}
return 0;
}

