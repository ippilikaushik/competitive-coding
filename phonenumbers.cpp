
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n;
cin>>n;
int b=0,c=n/11;
string a;
cin>>a;
for(int i=0;i<n;i++)
{
	if(a[i]=='8')
	b++;
}
cout<<min(b,c);
return 0;
}
