
#include<bits/stdc++.h>
using namespace std;

int main ()
{
long long int n;
cin>>n;
long long int b[n];
cin>>b[0];
long long int min=b[0],x=0;
for(long long int i=1;i<n;i++)
{
	cin>>b[i];
	if(b[i]<=min)
	{
	 min=b[i];
	 x=i;
}
}
long long int y=0;
for(long long int j=0;j<n;j++)
{
	if(b[j]==min)
	y++;
}
if(y==1)
cout<<x+1;
else
cout<<"Still Rozdil";
return 0;
}

