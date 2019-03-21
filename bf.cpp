
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll t;
string s1,s2;
cin>>t;
while(t--)
{
	int a[26]={0};
	int b[26]={0};
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
	{
		a[s1[i]-'a']++;
	}
	for(int i=0;i<s2.length();i++)
	{
		b[s2[i]-'a']++;
	}
	int max1=0,max2=0,min1=500,min2=500;
	int m1=0,m2=0;
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<26;i++)
	{
		if(a[i]>max1)
		{
			max1=a[i];
			v1.push_back(i);
			
		}
		if(a[i]>0)
		{
		 if(a[i]<min1)
		 {
		 	min1=a[i];
		 	v2.push_back(i);
		 }
	    }
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]>max2)
		{
			max2=b[i];
			v1.push_back(i);
			
		}
		if(b[i]>0)
		{
		 if(b[i]<min2)
		 {
		 	min2=b[i];
		 	v2.push_back(i);
		 }
	    }
	}
	/*int f=0,f1=0;
	for(int i=0;i<v1.size();i++)
	{
		if(b[v1[i]]==max1)
		{
			f=1;
			break;
		}
	}
	for(int i=0;i<v2.size();i++)
	{
		if(b[v2[i]]==min1)
		{
			f1=1;
			break;
		}
	}*/
	if(max1==max2&&min1==min2)
	{
		cout<<"Best Friends"<<endl;
	}
	else
	{
		cout<<"Just Friends"<<endl;
	}
	
}
return 0;
}

