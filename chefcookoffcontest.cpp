#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,n;
	char s1[]="cakewalk";
	char s2[]="simple";
	char s3[]="easy";
	char s4[]="easy-medium";
	char s5[]="medium";
	char s6[]="medium-hard";
	char s7[]="hard";
	int c1,c2,c3,c4,c5,c6,c7;
	c1=c2=c3=c4=c5=c6=c7=0;
	cin>>t;
	while(t--)
	{
		c1=c2=c3=c4=c5=c6=c7=0;
		cin>>n;
		char s[15];
		while(n--)
		{
			cin>>s;
			if(strcmp(s,s1)==0)
			c1++;
			if(strcmp(s,s2)==0)
			c2++;
			if(strcmp(s,s3)==0)
			c3++;
			if(strcmp(s,s4)==0)
			c4++;
			if(strcmp(s,s5)==0)
			c5++;
			if(strcmp(s,s6)==0)
			c6++;
			if(strcmp(s,s7)==0)
			c7++;
		}
		if(c1>=1&&c2>=1&&c3>=1)
		if(c4>=1||c5>=1)
		if(c6>=1||c7>=1)
		{
		cout<<"Yes"<<endl;
		continue;
		}
		cout<<"No"<<endl;
		
	}
 return 0;	
}
