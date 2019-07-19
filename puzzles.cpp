#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int min=v[n-1]-v[0];
    int i=0;
    while(i<=(v.size()-n))
    {
    	int y=v[i+n-1]-v[i];
    	if(y<min)
    	min=y;
    	i++;
	}
	cout<<min;
    return 0;
}
