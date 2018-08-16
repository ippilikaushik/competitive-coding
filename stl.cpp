#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int v1[1000];
	int t;
	cin>>t;
	while(t--)
	{
		int l1=0,l2=0;
		cin>>v1[l1++];
		while(v1[l1]!='\n')
		{
			cin>>v1[l1];
			l1++;
		}
		cout<<v1[l1];
	}
	
}
