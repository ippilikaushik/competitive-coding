#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
char ch,ch2;
cout<<"how many strings in 3 address code??";
cin>>n;
char c[n];
string s[n];
for(int i=0;i<n;i++)
{
cin>>c[i];
cin>>s[i];
}
for(int i=0;i<n-1;i++)
for(int j=i+1;j<n;j++)
{
if((c[i]!=c[j])&&(s[i]==s[j]))
{
ch=c[j];
c[j]='-';
ch2=c[i];
for(int i=0;i<n;i++)
{
for(int j=0;j<s[i].length();j++)
{
if(s[i][j]==ch)
s[i][j]=ch2;
}
}
}
}
cout<<"Reduced output is:"<<endl;
for(int i=0;i<n;i++)
{
if(c[i]!='-')
{cout<<c[i];
cout<<s[i];
cout<<endl;
}
}
return 0;
}

