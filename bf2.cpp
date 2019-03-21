#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--)
{
string s1,s2;
cin>>s1>>s2;
ll a1[26]={0},b2[26]={0};
ll max1=0,max2=0;
for(int i=0;i<s1.length();i++)
a1[s1[i]-97]++;

for(int i=0;i<s2.length();i++)
b2[s2[i]-97]++;

ll min1=500,min2=500;

for(int i=0;i<26;i++)
{

if(max1<a1[i])
{
 max1=a1[i];
}
if(max2<b2[i])
{
 max2=b2[i];
}
if(min1>a1[i]&&a1[i]!=0)
{min1=a1[i];
}
if(min2>b2[i]&&b2[i]!=0)
{
 min2=b2[i];
}

}

if(max1==max2&&min1==min2)
{

cout<<"Best Friends"<<endl;

}
else
{
cout<<"Just Friends"<<endl;
}


}

return 0;
}




