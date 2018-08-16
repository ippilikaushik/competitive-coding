#include<iostream>
using namespace std;
int main()
{
	int t,n,m,x,k;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>x>>k;
		int cte=0,cto=0;
		for(int i=0;i<k;i++)
	    {
	    	cin>>ch;
	    	if(ch=='E')
	    	cte++;
	    	else
	    	cto++;
		}
		int d=1;
		while(d<=m)
		{
			int p=x;
			while(p>0)
			{
			if(d%2==1)
			{
				if(cto==0)
				goto x1;
				cto--;
				p--;
				n--;
				
			}
			else
			{
				if(cte==0)
				goto x1;
				cte--;
				p--;
				n--;
				
			}	
			}
			x1:
		d=d+1;
			
		}
	
	if(n<=0)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
return 0;
}
