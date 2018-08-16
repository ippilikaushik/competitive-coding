#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int cnt=0;
	for(int j=0;j<n;j++)
	{
		if((a[j]>=a[k-1])&&(a[j]>0))
		cnt++;
	}
	cout<<cnt;
	return 0;
}
