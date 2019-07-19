
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,k;
cin>>n>>k;
long int a=2*n,b=5*n,c=8*n;
long int y;
y=(a/k)+(b/k)+(c/k);
if(a%k!=0)
y++;
if(b%k!=0)
y++;
if(c%k!=0)
y++;

cout<<y;
return 0;
}
