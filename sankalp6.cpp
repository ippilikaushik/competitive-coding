
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n;
cin>>n;
string c;
cin>>c;
int x=0,v=0,m=0;
for(int i=0;i<n;i++)
{
	if((x==-1)&&(c[i]=='u'))
	{
		x++;
		m++;
	}
	else if (c[i]=='u')
	{
		x++;
	}
	if((x==1)&&(c[i]=='d'))
	{
		x--;
		m++;
	}
	else if(c[i]=='d')
	{
		x--;
	}
}
cout<<v<<" "<<m;
return 0;
}

