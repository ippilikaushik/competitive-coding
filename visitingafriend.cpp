#include<iostream>
using namespace std;
int main()
{
	int m,n,h,l;
	cin>>n>>m;
	cin>>l>>h;
	n--;
	if(!n)
	{
		if(m>=l&&m<=h)
		cout<<"YES";
		else cout<<"NO";
	}
	while(n--)
	{
		int l1,h1;
		cin>>l1>>h1;
		if((m>=l1&&m<=h1)&&(l1>=l&&l1<=h))
		{
			cout<<"YES";
			break;
		}
		else
		{
		if(!(l1>=l&&l1<=h))
		{
		cout<<"NO";
		break;
	    }
		 
	}
	l=l1;h=h1;
   }
   return 0;
}
