#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0;
		char a[100];
		cin>>a[i++];
		while(a[i]!='\n')
		cin>>a[i++];
		for(int j=0;j<i;j++)
		{
		   if(i==(int)(a[j]-'0'))
		   a[j]='0';
		}
		int max=0;
		for(int k=0;k<i;k++)
		if((int)(a[k]-'0')>max)
		max=(int)(a[k]-'0');
		cout<<max<<endl;
		
	}
}
