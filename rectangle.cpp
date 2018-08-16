#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t,n;
	
	cin>>t;
	while(t--)
	{
		vector <int> sides;
		for(int i=0;i<4;i++)
		{
		cin>>n;
		sides.push_back(n);
	    }
		sort(sides.begin(),sides.begin()+4);
		if(sides[0]==sides[1]&&sides[2]==sides[3])
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
