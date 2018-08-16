#include<iostream>
using namespace std;
main()
{
	int n,b,t;
	cin>>t;
	while(t--)
	{
	cin>>n>>b;
	if(n%b==0)
	{int max=0,temp=0,i=0;
		while(i<=(n/b))
		{
			temp=(n-(i*b))*i;
			if(temp>max)
			max=temp;
			i++;
		}
		cout<<max<<endl;
	}
	else
	{
		int r=n%b;
		int max2=r,temp2=r,j=0;
		n=n-r;
			while(j<=(n/b))
		{
			temp2=(n-(j*b))*j;
			if(temp2>max2)
			max2=temp2;
			j++;
		}
		cout<<max2<<endl;
	}
}
}
