
#include<bits/stdc++.h>
using namespace std;
int main ()
{

long long int a,b,k,t;
cin>>t;
while(t--)
{
 cin>>a>>b>>k;
 long long int ans=0;
 if(k%2==0)
 {
 	ans+=(a-b)*(k/2);
 }
else
{
	ans+=(a-b)*((k-1)/2);
	ans+=a;
}
cout<<ans<<endl;
}
return 0;
}
