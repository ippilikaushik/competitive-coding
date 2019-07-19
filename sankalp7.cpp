
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int m,n;
cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
int sx=0,sy=0;
while(true)
{
	if(sx==m-1||sy==n-1)
	{
		cout<<sx<<" "<<sy;
		return 0;
	}
	if(a[sx][sy]==0)
	{
		sy++;
	}
	if(a[sx][sy]==1)
	{
		a[sx][sy]=0;
		sx++;
	}
}
return 0;
}
