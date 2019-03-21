
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
int y=min(a,c);
y=min(y,d);
long long r=y*256;
if((a-y)>0)
{
	int s=min((a-y),b);
	r+=(32*s);
}
cout<<r;
return 0;
}

