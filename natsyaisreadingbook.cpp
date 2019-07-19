#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,n2,n1,a=1,b,ct=1;
cin>>n;
vector<long long int>v;
while(ct<=n)
{
cin>>a>>b;
while(a<=b)
{
v.push_back(ct);
a++;
}
ct++;
}
cin>>n1;
if(n1==b)
{
cout<<"1";
return 0;
}
n2=n-v[n1-1]+1;
//for(int i=0;i<12;i++)
//cout<<v[i]<<" ";
//if(v[n1]==v[n1-1])
//n2++;
cout<<n2;
return 0;
}
