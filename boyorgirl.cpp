#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	int ct=0;
	char a[100];
	cin>>a;
	for(int i=0;a[i+1]!='\0';i++)
	for(int j=i+1;a[j]!='\0';j++)
	if(islower(a[i]))
	if(a[i]==a[j])
	{
		a[j]=a[j]-32;
	}
	for(int k=0;a[k]!='\0';k++)
	if(islower(a[k]))
	ct++;
	if(ct%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
	return 0;
}
