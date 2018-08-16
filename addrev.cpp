#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c,e=0,f=0,g=0;
	cin>>t;
	while(t--)
	{
		e=0,f=0,g=0;
		cin>>a>>b;
		while(a>0)
		{
			int d=a%10;
			e=(e*10)+d;
			a=a/10;
			
		}
			while(b>0)
		{
			int x=b%10;
			f=(f*10)+x;
			b=b/10;
			
		}
		c=e+f;
			while(c>0)
		{
			int y=c%10;
			g=(g*10)+y;
		    c=c/10;
			
		}
		cout<<g<<endl;
	}
	return 0;
}
