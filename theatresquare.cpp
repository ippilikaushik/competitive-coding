#include<iostream>
using namespace std;
int main()
{
	long int n,m,a;
	cin>>n>>m>>a;
	long int x=m/a;
	if(m%a>0)
	x++;
	long int x1=n/a;
	if(n%a>0)
	x1++;
	long int x2=x+x1;
	cout<<x2;
	return 0;
	
}
