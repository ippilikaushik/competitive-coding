#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	float y;
	cin>>x>>y;
	cout<<std::fixed;
	cout<<std::setprecision(2);
	if((x%5==0)&&(x<=y-0.5))
	cout<<(y-x-0.50);
	else
	cout<<y;
	return 0;
}
