#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char str[n];
		for(int p=0;p<n;p++)
		cin>>str[p];
		if(n%2==0)
		{
			for(int j=0;j<n-1;j=j+2)
			{
				char c=str[j];
				str[j]=str[j+1];
				str[j+1]=c;
			}
		}
		else
		{
			for(int k=0;k<n-2;k=k+2)
			{
				char c1=str[k];
				str[k]=str[k+1];
				str[k+1]=c1;
			}
		}
		for(int y=0;y<n;y++)
		{
			cout<<(char)(122-str[y]+97);
		}
		cout<<endl;
	}
	return 0;
}
