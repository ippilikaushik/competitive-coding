#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,q[10000],n1;
	long int x,d[10000];
	cin>>t;
	while(t--)
	{
		cin>>n>>n1;
		for(int i=0;i<n;i++)
		cin>>d[i];
		for(int j=0;j<n1;j++)
		{
		cin>>q[j];
		for(int a=0;a<n;a++)
	{
			if(q[j]<d[a])
		{
			q[j]=0;
			break;
		}
		else
		q[j]=floor(q[j]/d[a]);}
		cout<<q[j]<<" ";
		
	}
	cout<<endl;
}
return 0;
}
