#include<iostream>
using namespace std;
int main()
{
	int n,t;
	long int p;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		int c=0,h=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
	    if(p/10>=a[i])
	    h++;
	    if(p/2<=a[i])
	    c++;
	    }
	    if((c==1)&&(h==2))
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
		
	}
	return 0;
}
