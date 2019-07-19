
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long l,r,x,y,j,i,ct=0;
cin>>l>>r>>x>>y;
long long y1=max(l,r);
vector<long long>v;
for(i=1;i<=sqrt(y1);i++)
{
	if(y1%i==0)
	{
	 v.push_back(i);
	 v.push_back(y1/i);
}
}
for(i=0;i<v.size();i++)
{
	for(j=i+1;j<v.size();j++)
	{
		if(v[i]!=v[j])
		{
		long long v1=min(v[i],v[j]);
		while(((v[i]%v1)!=0)||((v[j]%v1)!=0))
		{
			v1--;
		}
		if(v1==x)
		{
		 if(((v[i]*v[j])/v1)==y)
		 {
		  ct+=2;
		  //cout<<i<<" "<<j<<endl;	    
		 }
	   }
	}
	
}
}

cout<<ct;
return 0;
}

