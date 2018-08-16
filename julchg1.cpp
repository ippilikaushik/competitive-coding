/*#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
main()
{
	int t;
	string str;
	cin>>t;
	t++;
	while(t--)
	{int i,ct=1;
		getline(cin,str);
		str[0]=toupper(str[0]);
		for(i=1;str[i]!='\0';i++)
		{ str[i]=tolower(str[i]);}
		for(i=0;str[i]!='\0';i++)
		{
				if(isspace(str[i]))
			{
			str[i+1]=toupper(str[i+1]);
			ct++;
		}}
		i=0;
		if(ct==1)
		cout<<str;
		else{
		
		while(ct>1)
		{
		if(isupper(str[i]))
		{
		cout<<str[i]<<"."<<" ";
	ct--;}i++;
}
while(!isupper(str[i]))i++;
for(int j=i;str[j]!='\0';j++)
cout<<str[j];
cout<<endl;
}
cout<<endl;
}
}

*/
#include<iostream>
using namespace std;
main()
{
	int n,b,t;
	cin>>t;
	while(t--)
	{
	cin>>n>>b;
	if(n>b)
	{
	if(n%b==0)
	{int max=0,temp=0,i=0;
		while(i<=(n/b))
		{
			temp=(n-(i*b))*i;
			if(temp>max)
			max=temp;
			i++;
		}
		cout<<max<<endl;
	}
	else
	{
		int r=n%b;
		int max2=r,temp2=r,j=0;
		n=n-r;
			while(j<=(n/b))
		{
			temp2=(n-(j*b))*j;
			if(temp2>max2)
			max2=temp2;
			j++;
		}
		cout<<max2<<endl;
	}
}
else
cout<<"0"<<endl;
}}
