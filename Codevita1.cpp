
#include<bits/stdc++.h>
using namespace std;
int value(char ch) 
{ 
    if(ch>='0'&&ch<='9') 
    return ch-'0'; 
    else
    return ch-'A'+10; 
} 
int base_ten(string any,int l) 
{ 
    int n=0,p=1;
    for(int j=any.length()-1;j>=0;j--) 
    { 
        n+=value(any[j])*p; 
        p=p*l; 
    } 
   return n; 
} 
int main ()
{
string s;
getline(cin,s);
string w="";
vector<string>v;
for(int y=0;y<s.length();y++)
{
	if(s[y]==' ')
	{
	 v.push_back(w);
	 w="";
    }
    else{
    	w=w+s[y];
	}
}
int x=INT_MAX;
for(int i=0;i<v.size();i++)
{
	
	int bs=1;
	for(int j=0;j<v[i].length();j++)
	{
		int r=value(v[i][j]);
		if(r>bs)
		bs=r;
	}
	int d=base_ten(v[i],bs+1);
	if(d<x)
	x=d;
}
cout<<x<<endl;
return 0;
}
