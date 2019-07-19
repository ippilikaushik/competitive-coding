#include<iostream>
using namespace std;
int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int y=1;
	long s=0;
	while(y<=w)
	{
		s+=(y*k);
		y++;
	}
	s=s-n;
	if(s<0)
	s=0;
	cout<<s;
	return 0;
	
}
