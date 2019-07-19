
#include<bits/stdc++.h>
using namespace std;
int main ()
{
unsigned long long int a[26],s,i;
a[0]=1;
for(i=1;i<26;i++)
a[i]=((i+1)*a[i-1])+a[i-1];
//for(int i=0;i<26;i++)
//cout<<a[i]<<" ";
cin>>s;
vector<int>v;
while(s>0)
{
	for(i=25;i>=0;i--)
	{
		if(a[i]<=s)
		{
			s-=a[i];
			v.push_back(i);
			break;
		}
	}
}
sort(v.begin(),v.end());
for(i=0;i<v.size();i++)
{
	cout<<(char)('A'+v[i]);
}

return 0;
}

