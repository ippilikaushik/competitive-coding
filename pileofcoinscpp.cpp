
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long int p,q,t;
cin>>t;
while(t--)
{
	cin>>p>>q;
	int f=0;
	while(p%2==0||q%2==0)
	{
		if(p==0||q==0)
		break;
		if(p%2==0)
		{
			q=p/2;
			p=p/2;
			
			f++;
		}
		else if(q%2==0)
		{
			p=q/2;
			q=q/2;
			f++;
		}
		
	}
	if(f%2==0)
	cout<<"Jeel"<<endl;
	else
	cout<<"Ashish"<<endl;
}
return 0;
}

