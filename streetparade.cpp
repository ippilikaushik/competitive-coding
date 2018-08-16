#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n,x,p=1;
	cin>>n;
	while(n!=0)
	{
	p=1;
	stack<int> a,b;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x==p)
		{
		b.push(x);
		p++;
	}
	else
	a.push(x);
	while(!a.empty()&&(p==a.top()))
	{
		b.push(p);
		a.pop();
	    p++;
	}
}
	while(!a.empty())
	{
		int y=a.top();
		a.pop();
		b.push(y);
	}
	int f=1;
	for(p=n;p>=1;p--)
	{
		int z=b.top();
		b.pop();
		
		if(z!=p)
		f=0;
	}
if(f)
cout<<"yes"<<endl;
else cout<<"no"<<endl;
while(!b.empty())
{
b.pop();
}
cin>>n;
}
return 0;
}
