#include<iostream>
#define rem 1000000007
using namespace std;
class com
{
	public:
	int t,l,r;
		void getdata()
		{
			cin>>t>>l>>r;
			
		}
		friend void updatearr(int a[],com);
};
void updatearr(int a[100000],com b[],int size)
{
		if(b[size].t==1)
			{
				for(int j=b[size].l-1;j<=b[size].r-1;j++)
				a[j]++;
			}
			if(b[size].t==2)
			{
				for(int k=b[size].l-1;k<=b[size].r-1;k++)
				{
					updatearr(a,b,k);
				}
			}
}
int main()
{
	int te,n,m,a[100000];
	cin>>te;
	while(te--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		a[i]=0;
		com b[m];
		int x=0;
		while(x<m)
		{
			b[x].getdata();
			if(b[x].t==1)
			{
				for(int j=b[x].l-1;j<=b[x].r-1;j++)
				a[j]++;
			}
			if(b[x].t==2)
			{
				for(int k=b[x].l-1;k<=b[x].r-1;k++)
				{
					updatearr(a,b,k);
				}
			}
			x++;
		}
		for(int i1=0;i1<n;i1++)
		cout<<a[i1]%rem<<" ";
		cout<<endl;
		
	}
	return 0;
}
