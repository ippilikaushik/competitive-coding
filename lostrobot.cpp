#include<iostream>
using namespace std;
int main()
{
	int x1,x2,y1,y2,t;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2;
		if((x1==x2)&&(y2>y1))
		cout<<"up"<<endl;
		else if((x1==x2)&&(y1>y2))
		cout<<"down"<<endl;
		else if((y1==y2)&&(x2>x1))
		cout<<"right"<<endl;
		else if((y1==y2)&&(x1>x2))
		cout<<"left"<<endl;
		else
		cout<<"sad"<<endl;
	}
	return 0;
}
