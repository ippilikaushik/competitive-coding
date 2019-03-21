
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 long long int n,n1,d,g,t;
 vector<int>v,v1;
 cin>>t;
 while(t--)
 {
 	v.clear();
 	v1.clear();
 cin>>n>>d;
 n1=n;
 
 while(n>0)
 {
 	v.push_back(n%10);
 	v1.push_back(n%10);
 	n/=10;
 }
 sort(v1.begin(),v1.end());
 reverse(v.begin(),v.end());
 for(int i=0;i<v1.size();i++)
 {
 if(v1[i]>=d)
 {
 	for(int h=0;h<v.size();h++)
 	{
 		if(v[h]==v1[i])
 		{
 			v.erase(v.begin()+h);
 			v.push_back(d);
 			break;
		 }
	 }
 }
}
//reverse(v.begin(),v.end());
for(int y=0;y<v.size()-1;y++)
{
	if((v[y]>v[y+1])&&(d<v[y]))
	{
		v.erase(v.begin()+y);
 			v.push_back(d);
	}
}
g=0;
for(int y=0;y<v.size();y++)
{
	g=(g*10)+v[y];
}
 cout<<g<<endl;
}
 return 0;
}
