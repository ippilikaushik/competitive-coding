
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,f=0;
cin>>n;
string v[n];
for(int i=0;i<n;i++)
{
	cin>>v[i];
	if(!f)
	{
	if((v[i][0]=='O'&&v[i][1]=='O'))
	{
		f=1;
		v[i][0]='+';v[i][1]='+';
	}
	else if((v[i][3]=='O'&&v[i][4]=='O'))
	{
		f=1;
		v[i][3]='+';v[i][4]='+';
	}
    }
}
if(f)
{
	cout<<"YES"<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<v[j]<<endl;
	}
}
else
{
	cout<<"NO";
}
return 0;
}

