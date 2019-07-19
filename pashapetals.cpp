
#include<bits/stdc++.h>
using namespace std;
int main ()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);
int m,n,k,i,j,r,s,ct=0,ct2=0;
cin>>n>>m>>k;
int a[n][m];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
a[i][j]=0;
int a1[k][2];
for(int j=0;j<k;j++)
{
	cin>>a1[j][0]>>a1[j][1];
}
j=0;
while(j<k)
{
	r=a1[j][0];
	s=a1[j][1];
	a[r-1][s-1]=1;
	for(int u=0;u<n-1;u++)
	for(int v=0;v<m-1;v++)
	{
		if(a[u][v]==1&&a[u][v+1]==1&&a[u+1][v]==1&&a[u+1][v+1]==1)
		{
			goto x;
		}
	}
	j++;	
}
x:
 if(j<k)
	cout<<j+1;
else
cout<<"0";
	return 0;
}
	
