
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t,k,n;
ios_base::sync_with_stdio(false); cin.tie(NULL);

cin>>t;
while(t--)
{
	cin>>n;
	cin>>k;
	int l,t1=0,s=0;
	while(n--)
	{
		cin>>l;
		if((((l-t1)%k)==0)&&(((l-t1)/k)!=1))
		s+=(((l-t1)/k)-1);
		else
		s+=((l-t1)/k);
		t1=l;
	}
	cout<<s;
}
return 0;
}

