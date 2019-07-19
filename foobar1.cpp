
#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s;
getline(cin,s);
for(int i=0;i<s.length();i++)
{
	if(s[i]==' ')
	cout<<"000000";
	else {
	if(isupper(s[i]))
	{
		cout<<"000001";
		s[i]=tolower(s[i]);
	}
			if(s[i]=='a')
			cout<<"100000";
			else if(s[i]=='b')
			cout<<"110000";
			else if(s[i]=='c')
			cout<<"100100";
			else if(s[i]=='d')
			cout<<"100110";
			else if(s[i]=='e')
			cout<<"100010";
			else if(s[i]=='f')
			cout<<"110100";
			else if(s[i]=='g')
			cout<<"110110";
			else if(s[i]=='h')
			cout<<"110010";
			else if(s[i]=='i')
			cout<<"010100";
			else if(s[i]=='j')
			cout<<"010110";
			else if(s[i]=='k')
			cout<<"101000";
			else if(s[i]=='l')
			cout<<"111000";
			else if(s[i]=='m')
			cout<<"101100";
			else if(s[i]=='n')
			cout<<"101110";
			else if(s[i]=='o')
			cout<<"101010";
			else if(s[i]=='p')
			cout<<"111100";
			else if(s[i]=='q')
			cout<<"111110";
			else if(s[i]=='r')
			cout<<"111010";
			else if(s[i]=='s')
			cout<<"011100";
			else if(s[i]=='t')
			cout<<"011110";
			else if(s[i]=='u')
			cout<<"101001";
			else if(s[i]=='v')
			cout<<"111001";
			else if(s[i]=='w')
			cout<<"010111";
			else if(s[i]=='x')
			cout<<"101101";
			else if(s[i]=='y')
			cout<<"101111";
			else if(s[i]=='z')
			cout<<"101011";
	}
}
return 0;
}

