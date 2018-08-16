#include<iostream>
#include<string>
using namespace std;
main()
{
	
	string str;
	int i,j,t,ct1,ct2;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	i=1,ct1=0,ct2=0;
	getline(cin,str);
	for(j=0;str[j+1]!='\0';j++)
	{
		if((str[j-1]!='>')||(str[j]=='<')||(str[j+1]!='>'))
		ct1++;
		else if(str[j]=='>')
		ct2++;
		
	}
	if(str[j]=='<')
	ct1++;
	if(str[j]=='>')
	ct2++;
	i=i+ct1;
    if(ct2>ct1)
    i=i+(ct2-ct1);
	cout<<i<<endl;
}
}
