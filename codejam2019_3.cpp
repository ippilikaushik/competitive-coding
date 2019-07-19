#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll t,n,a,i,p,b,n1,mi,t1=1;
cin>>t;
while(t1<=t)
{
cin>>b>>n;
ll a[n],b[n];
char c[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=1;i<n-1;i++)
{
    if(a[i]!=a[i+1])
    {
        b[i+1]=__gcd(a[i],a[i+1]);
    }
}
b[0]=b[0]/__gcd(a[0],a[1]);
b[1]=a[0]/b[0];
n1=1;
p=0;
char ch='A';
while(n1<=n)
{
    mi=LONG_MAX;
    for(i=0;i<n;i++)
    {
        if(b[i]<mi)
        {
            mi=b[i];
            p=i;
        }
    }
    c[p]=ch++;
    n1++;
}
cout<<"Case #"<<t1<<": ";
for(i=0;i<n;i++)
cout<<c[i];
cout<<endl;
t1++;
}
return 0;
}

