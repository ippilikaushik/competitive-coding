
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long n,i,j,x,y,z,s1=0,s2=0,s3=0,s4=0,s5=0;
	cin>>n;
	if(n==1)
	{
		cin>>z;
		if(z==0)
		cout<<"1";
		return 0;
	}
	long long a[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		cin>>a[i][j];
		if(a[i][j]==0)
		{
			x=i;
			y=j;
		}
	}
	i=0;
	while(i<n)
	{
		if(i!=x)
		{
			for(j=0;j<n;j++)
			s1+=a[i][j];
			break;
		}
		i++;
	}
		i=x;
			for(j=0;j<n;j++)
			s2+=a[i][j];
    a[x][y]=s1-s2;
    if(a[x][y]<=0)
    {
    	cout<<"-1";
    	return 0;
	}
    //cout<<a[x][y]<<" ";
    //int f=0;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i==j)
    		s3+=a[i][j];
    		if((i+j)==(n-1))
    		s4+=a[i][j];
		}
	}
	//cout<<s3<<" "<<s4<<endl;
	if(s3==s4)
	{
		for(i=0;i<n;i++)
		{
			s5=0;
			for(j=0;j<n;j++)
			{
				s5+=a[i][j];
			}
			if(s5!=s3)
			goto x;
		}
		for(j=0;j<n;j++)
		{
			s5=0;
			for(i=0;i<n;i++)
			{
				s5+=a[i][j];
			}
			if(s5!=s3)
			goto x;
		}
		
	}
	else
	{
		x:
			cout<<"-1";
			return 0;
	}
	cout<<a[x][y];
    return 0;
}
