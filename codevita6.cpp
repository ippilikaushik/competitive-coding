#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,t;
cin>>t;
while(t--)
{
cin>>n;
int a1[n],ct=0,f=1;
char a[n],b[n];
     for(int i=0;i<n;i++)
     {
        cin>>a1[i];
        a1[i]--;
        a[i]='a'+i;
        b[i]='a'+i;
     }
    while(f)
    {
	  f=0;
      for(int i=0;i<n;i++)
      {
        a[a1[i]]=b[i];
      }
      for(int i=0;i<n;i++)
      b[i]=a[i];
	  ct++;
      //for(int i=0;i<n;i++)
       //cout<<a[i]<<" ";
       //cout<<endl;
      for(int i=0;i<n;i++)
      if(a[i]!='a'+i)
         {    
              f=1;
              break;
        }
    }
    cout<<ct<<endl;
}
    return 0;
}
    

