#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t,t1=1;
     cin>>t;
     while(t1<=t)
     {
         long long int n,p,i,j,l,i1,m,g=100000;
         cin>>n>>p;
         long long int a[n],b[100000]={0};
         for(i=0;i<n;i++)
         {
             cin>>a[i];
             b[a[i]]++;
         }
         sort(a,a+n);
         for(i=n-1;i>=0;i--)
         {
             j=i-p+1;
             if(j<0)
             break;
             l=0;
             i1=i;
             m=a[i1];
             i1--;
             while(i1>=j)
             {
                 l+=(m-a[i1]);
                 i1--;
             }
             g=min(g,l);
         }
         cout<<"Case #"<<t1<<": "<<g<<endl;
         t1++;
         
     }
     return 0;
}
