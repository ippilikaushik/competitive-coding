
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int x,y,ct=0,d,p=1;
cin>>x;
y=x;
while(y>0)
{
	d=y%10;
	y=y/10;
	ct++;
}
if(d==9)
{
ct++;
d=1;
}
else
d++;
ct--;
while(ct--)
{
	p=p*10;
}
cout<<(d*p)-x;
return 0;
}
