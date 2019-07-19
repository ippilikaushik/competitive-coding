
#include<bits/stdc++.h>
using namespace std;
vector <long long int > severat(long long int n) 
{ 
    vector<long long int>v;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (long long int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (long long int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (long long int p=2; p<=n; p++) 
       if (prime[p]) 
          v.push_back(p);
    return v;
} 
int main ()
{
long long int x,n=-1;
cin>>x;
vector<long long int> b=severat(x);
vector<long long int> d;
//for(long long int h=0;h<b.size();h++)
//cout<<b[h]<<" ";
set<long long int> s(b.begin(),b.end());
if(s.find(x)!=s.end())
{
	n=1;
	d.push_back(x);
	goto en;
}
for(long long int r=0;r<b.size();r++)
{
	if(s.find(b[r])!=s.end()&&s.find(x-b[r])!=s.end())
	{
	   n=2;
	   d.push_back(b[r]);
	   d.push_back(x-b[r]);
	   goto en;
	}
	
}
for(long long int w=0;w<b.size();w++)
{
	for(long long int w1=0;w1<b.size();w1++)
{
	if(s.find(x-b[w]-b[w1])!=s.end())
	{
	   n=3;
	   d.push_back(b[w]);
	   d.push_back(b[w1]);
	   d.push_back(x-b[w]-b[w1]);
	   goto en;
	}
}
}
en:
		cout<<n<<endl;
		for(long long int j=0;j<d.size();j++)
		{
			cout<<d[j]<<" ";
		}
return 0;
}

