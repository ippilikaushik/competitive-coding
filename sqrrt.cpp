#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"give the range:";
	cin>>a>>b;
	for(int i=a;i<=b;i++)
    {
      double x=sqrt(i);
      int p=ceil(x);
      int y=sqrt(i);
      if(p==y)
      {
	   cout<<i<<"is a perfect square"<<endl;
	   i+=(y*2);//this line is added to preventt timout incase of large numbers it reduces the search space significantly
      }
  }
	return 0;
}
