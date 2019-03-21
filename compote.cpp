
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int a,b,c,d=1;
cin>>a>>b>>c;
while((d<=a)&&((2*d)<=b)&&((4*d)<=c))
{
	d++;
}
int s=(d-1)+((d-1)*2)+((d-1)*4);
cout<<s;
return 0;
}

