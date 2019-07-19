#include<iostream>
using namespace std;
template<class t>
t sum(t a,t b)
{
	return a+b;
}
int main()
{
int c=sum(2,4);
cout<<c<<endl;
float d=sum(12.56,56.8);
cout<<d<<endl;
float e=sum(5.678,19.8);
cout<<e<<endl;
return 0;
}

