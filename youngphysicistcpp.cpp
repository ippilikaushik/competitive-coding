#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,x=0,y=0,z=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	int f=0;
	if(x==0)
	  if(y==0)
	    if(z==0)
	      f=1;
	if(f)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
