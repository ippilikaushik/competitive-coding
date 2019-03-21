#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pi;
typedef vector<ll> vi;
typedef vector<pair<ll,ll> >  vii;
typedef map<ll,ll> ma;
const double PI = acos(-1);
#define pb push_back
#define X first
#define Y second
#define mp make_pair
#define ins insert
#define mod 1000000007
#define zero(array) memset(array,false,sizeof(array))
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FORN(i,a,b) for(ll i=a;i<b;i++)
#define so(arr) sort(arr.begin(),arr.end())
#define sor(arr) sort(arr.rbegin(),arr.rend())
#define low(arr,x) lower_bound(arr.begin(),arr.end(),x)-arr.begin();
#define hi(arr,x)  upper_bound(arr.begin(),arr.end(),x)-arr.begin();

double tick(){static clock_t oldt;clock_t newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt = newt;return diff;}

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{   //asc
    return (a.second < b.second);
}

//Sieve

/*vi prime;
  bool mark[100110];
  zero(mark);

  for(ll i=2;i<=100100;i++)
  { if(mark[i]==true)
    { prime.pb(i);
      for(ll j=2*i;j<=100100;j+=i)
      { mark[j]=false;
	  }
	}
  }
*/
int retn(vi v1)
{
	int x=0;
	FORN(i,0,v1.size())
	{
		x*=10;
		x+=v1[i];
	}
	return x;
}
int main ()
{
int n,i;
cin>>n;
int maxn=0;
vi v;
while(n>0)
{
	v.pb(n%10);
	n=n/10;
}

reverse(v.begin(),v.end());
int ct=0;
FORN(i,0,v.size())
{
	if(v[i]%2==0)
	{
		int u=v[i];
		v[i]=v[v.size()-1];
		v[v.size()-1]=u;
		int y=retn(v);
		if(y>maxn)
		maxn=y;
		int h=v[v.size()-1];
		v[v.size()-1]=v[i];
		v[i]=h;
	}
	else
	{
		ct++;
	}
}
if(ct<v.size())
cout<<maxn;
else
cout<<"-1";
}
