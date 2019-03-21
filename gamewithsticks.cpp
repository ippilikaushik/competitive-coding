
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int m,n,ct=0;
cin>>m>>n;
while(m>0&&n>0)
{
	m--;
	n--;
	ct++;
}
if(ct%2!=0)
cout<<"Akshat";
else
cout<<"Malvika";
return 0;
}
