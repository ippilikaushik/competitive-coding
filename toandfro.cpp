#include<iostream>
using namespace std;
int main()
{
	char s[200],a[20][20];
	int n;
	cin>>n;
	while(n!=0)
	{
		int l=0,l1=0;
		cin>>s;
		for(l=0;s[l]!='\0';l++);
		int k=l/n;
		int x=2;
		for(int j=0;j<k;j++)
		{
		if(x%2==0)
		{
		for(int i=0;i<n;i++)
		a[i][j]=s[l1++];
	}
		if(x%2!=0)
		{
		for(int ia=n-1;ia>=0;ia--)
		a[ia][j]=s[l1++];
		}
		x++;}
	   for(int p=0;p<n;p++)
	   for(int q=0;q<k;q++)
	   cout<<a[p][q];
	   
		cin>>n;
	}
	return 0;
}
