#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long int a[26],sum;
	int b[26],t;
	cin>>t;
	char s[50000];
	while(t--)
	{
		sum=0;
		for(int i=0;i<26;i++)
		{
		cin>>a[i];
		b[i]=0;
	}
		cin>>s;
		for(int j=0;s[j]!='\0';j++)
		{
			int x=s[j]-97;
			b[x]++;
		}
		for(int k=0;k<26;k++)
		if(b[k]==0)
		sum+=a[k];
		cout<<sum<<endl;
	}
	return 0;
	
}
