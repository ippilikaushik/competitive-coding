
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int t,n,x;
cin>>t;
while(t--)
{
	cin>>n;
	long long int s=0;
	for(int i=0;i<n;i++)
	{
	 cin>>x;
	 s+=x;
    }
	cout<<s-n+1<<endl;
}
    return 0;
	
}

