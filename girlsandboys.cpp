#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	while(x!=-1&&y!=-1)
	{
		int b=x,g=y,v=b;
		float max=g,min=b;
		if(b>g)
		{
		max=b;
		min=g;
	}
		float cnt=max/(min+1);
		cnt=ceil(cnt);
		cout<<cnt<<endl;
		cin>>x>>y;
	}
	return 0;
}
