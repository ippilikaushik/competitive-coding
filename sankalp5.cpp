
#include<bits/stdc++.h>
using namespace std;
int main ()
{

int h1,m1;
int h2,m2;
cin>>h1>>m1;
cin>>h2>>m2;
int t1=(h1*60)+m1;
int t2=(h2*60)+m2;
int t3=t2-t1;
int h=0;
while(t3>=60)
{
	t3-=60;
	h++;
}
int f;
cout<<"1.truck 2.car 3.cycle";
cin>>f;
if(f==1)
{
	if(h<=3)
	cout<<20*h;
	else
	cout<<20*h+ (h-3)*30;
}
if(f==2)
{
	if(h<=3)
	cout<<10*h;
	else
	cout<<10*h+ (h-3)*20;
}
if(f==3)
{
	if(h<=3)
	cout<<5*h;
	else
	cout<<5*h+ (h-3)*10;
}
return 0;
}
