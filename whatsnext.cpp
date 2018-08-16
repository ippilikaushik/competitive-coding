#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	while(a!=0||b!=0||c!=0)
	{
		if((2*b)==(a+c))
		cout<<"AP"<<" "<<c+(b-a)<<endl;
		else if((b*b)==(a*c))
		cout<<"GP"<<" "<<c*(b/a)<<endl;
		cin>>a>>b>>c;
		
	}
}

