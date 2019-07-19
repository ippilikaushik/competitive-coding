#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
int n,t,k,k1,f=0;
cin>>n>>t;
k=n;
string s;
if(t<10)
s=to_string(t);
else
s=to_string(1);

n--;
while(n--)
{
	s+=to_string(0);
}
if(s.length()==k)
f=1;
if(f)
cout<<s;
else
cout<<"-1";
return 0;
}

