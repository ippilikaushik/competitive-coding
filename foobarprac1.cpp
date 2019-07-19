
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int x,y;
cin>>x;
while(x>0)
{
	y=sqrt(x);
	cout<<y*y<<" ";
	x-=(y*y);
}
return 0;
}
