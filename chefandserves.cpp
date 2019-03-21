
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int t;
long long p1,p2,k;
cin>>t;
while(t--)
{
	cin>>p1>>p2>>k;
	long long p=(p1+p2)/k;
	if(p%2==0)
	cout<<"CHEF"<<endl;
	else
	cout<<"COOK"<<endl;
}
return 0;
}

