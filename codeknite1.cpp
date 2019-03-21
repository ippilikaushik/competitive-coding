
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,ct=0;
stack<int> s;
cin>>n;
while(n>0)
{
	s.push(n%2);
	n/=2;
	ct++;
}
int f=1,y,n2=0;
ct--;
while(!s.empty())
{
	y=s.top();
	if(f)
	if(y==0)
	{
		y=1;
		f=0;
	}
	n2+=(y*pow(2,ct));
	ct--;
	s.pop();
}
cout<<n2;
return 0;
}
