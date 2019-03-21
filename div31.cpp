
#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s1,s2;
cin>>s1;
cin>>s2;
int h1,m1,h2,m2;
h1=(s1[1]-'0')+((s1[0]-'0')*10);
h2=(s2[1]-'0')+((s2[0]-'0')*10);
m1=(s1[4]-'0')+((s1[3]-'0')*10);
m2=(s2[4]-'0')+((s2[3]-'0')*10);
int diff=(h2-h1)*60;
diff+=(m2-m1);
diff/=2;
while(diff>=60)
{
	h1++;
	diff-=60;
}
m1+=diff;
if(m1>=60)
{
	h1++;
	m1-=60;
}
if(h1>9)
cout<<h1;
else
cout<<"0"<<h1;
cout<<":";
if(m1>9)
cout<<m1;
else
cout<<"0"<<m1;
return 0;
}


