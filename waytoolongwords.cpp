#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int n,i;
	cin>>n;
	while(n--)
	{
		cin>>a;
		for(i=0;a[i]!='\0';i++);
		if(i<=10)
		cout<<a<<endl;
		else
		cout<<a[0]<<i-2<<a[i-1]<<endl;
		
	}
	return 0;
}
