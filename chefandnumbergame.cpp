
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
	
long long int n,x,l=0,m=0;
cin>>n;
long long int v[n];
for(x=0;x<n;x++)
{
	cin>>v[x];
}
sort(v,v+n);
for(x=0;x<n;x++)
{
	if(v[x]<0)
	l++;
	else
	m++;
}
cout<<max(m,l);
if(m==0||l==0)
cout<<" "<<max(m,l)<<endl;
else
cout<<" "<<min(m,l)<<endl;
}
return 0;
}
