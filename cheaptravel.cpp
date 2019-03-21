
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,m,a,b;
cin>>n>>m>>a>>b;
int c1=a*n;
int y=n/m,y1=n%m;
int c2=(y)*b;
if(y1*a<b)
c2+=y1*a;
else
c2+=b;
if(c1<=c2)
cout<<c1;
else
cout<<c2;
return 0;
}

