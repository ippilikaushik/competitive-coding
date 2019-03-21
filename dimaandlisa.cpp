
#include<bits/stdc++.h>
using namespace std;
vector <long int> severat(long int n) 
{ 
    vector<long int>v;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (long int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (long int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (long int p=2; p<=n; p++) 
       if (prime[p]) 
          v.push_back(p);
    return v;
} 
int main ()
{
long int x;
cin>>x;
vector<long int> b=severat(x);
for(long int h=0;h<b.size();h++)
cout<<b[h]<<" ";
return 0;
}

