
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n;
cin>>n;
char s;
int a=0,d=0;
for(int i=0;i<n;i++)
{
	cin>>s;
	if(s=='A')
	a++;
	else
	d++;
}
if(a>d)
{
	cout<<"Anton";
}
else if(d>a)
{
	cout<<"Danik";
}
else
{
	cout<<"Friendship";
}
return 0;
}
