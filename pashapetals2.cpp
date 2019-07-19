
#include<bits/stdc++.h>
using namespace std;
int main ()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);
int m,n,k,i,j,r,s,ct=0;
cin>>n>>m>>k;
//int a[n][m];
//for(i=0;i<n;i++)
//for(j=0;j<m;j++)
//a[i][j]=0;
int a1[k][2];
for(j=0;j<k;j++)
{
	cin>>a1[j][0]>>a1[j][1];
}
int h=0;
while(h<k)
{
	int f=0,a=0,b=0,c=0,d=0;
	r=a1[h][0];
	s=a1[h][1];
	for(i=h;i<k;i++)
	{
		if(a1[i][0]==r&&a1[i][1]==s)
		{
			a++;
		}
		else if(a1[i][0]==r+1&&a1[i][1]==s)
		{
			b++;
		}
		else if(a1[i][0]==r&&a1[i][1]==s+1)
		{
			c++;
		}
		else if(a1[i][0]==r+1&&a1[i][1]==s+1)
		{
			d++;
		}
		if(a>0&&b>0&&c>0&&d>0)
		{
			f=i;
			break;
		}
		
	}
	if(f)
	{
	ct=i+1;
	break;	
	}
	h++;
}
cout<<ct;
return 0;
}
	
