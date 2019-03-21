
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
vector<int> primeFactors(int n) 
{ 
vector<int> v;
    while (n%2 == 0) 
    { 
        v.push_back(2);
        n = n/2; 
    } 
  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.push_back(i);
            n = n/i; 
        } 
    } 
    if (n > 2) 
       v.push_back(n);
       return v;
} 
int main ()
{
int n,h,f=1;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
 int result = a[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(a[i], result); 
    
 for(int i=0;i<n;i++)
 {
 	h=a[i]/result;
 	vector<int>v1=primeFactors(h);
 	for(int i=0;i<v1.size();i++)
 	{
 		if(v1[i]!=2&&v1[i]!=3)
 		{
 			f=0;
 			break;
		 }
	 }
 
		}
		if(f)
		cout<<"Yes";
		else
		cout<<"NO";
		return 0;
	}
