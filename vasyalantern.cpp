
#include<bits/stdc++.h>
using namespace std;

int main ()
{
std::cout << std::fixed;
    std::cout << std::setprecision(10);
int n;
long long l,t;
cin>>n>>l;
vector<long>v;
for(int i=0;i<n;i++)
{
	cin>>t;
	v.push_back(t);
}
sort(v.begin(),v.end());
long d=0;
for(int i=0;i<n-1;i++)
{
	long y=v[i+1]-v[i];
	if(y>d)
	d=y;
}
if((l-v[n-1])>d)
d=l-v[n-1];
cout<<d/2.0;
return 0;
}
