
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n;
cin>>n;
string a;
cin>>a;
if(n==2)
{
	cout<<a[0]<<a[1];
}
else if(n==3)
{
	cout<<a[0]<<a[1]<<a[2];
}
else
{
	int k=n/2,k1=0,i;
	k--;
	for(i=0;i<n-1;i+=2)
	{
		
		cout<<a[i]<<a[i+1];
		if(k1<k)
		{
			cout<<"-";
			k1++;
		}
	}
	if(i==n-1)
	cout<<a[i];

}
return 0;
}
