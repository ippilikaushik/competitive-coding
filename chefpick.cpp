#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str;
	int t,b,c;
	cin>>t;
	while(t--)
	{
		string str2="";
		cin>>str;
        c=str.size();
        int arr[c];
        b=0;
        while(b!=c)
       {
         arr[b]=str[b]-'0';
          b++;
       }
       int x=0,y=0;
       char ch;
       /*for(int i=0;i<c-1;i++)
         
       for (int j = 0; j < c-i-1; j++) 
           if (arr[j] > arr[j+1])
              {
              	int t=arr[j];
              	arr[j]=arr[j+1];
              	arr[j+1]=t;
			  }
              
			  for(int k=0;k<c;k++)
              {
              	for(int j=k+1;j<c;j++)
              	{
              		x=(arr[k]*10)+arr[j];
              		y=(arr[j]*10)+arr[k];
              		if((x<=90)&&(x>=65))
              		{
              			ch=x;
              			str2=str2+ch;
					  }
					if((y<=90)&&(y>=65))
					 {
					 	ch=y;
					 	str2=str2+ch;
					  } 
					  
				  }
			  }
			  for(char p='A';p<='Z';p++)
			  
			  	{
				for(int x1=0;x1<str2.size();x1++)
			  	if(p==str2[x1])
			  	{
				  cout<<p;
				  goto g;
			  }
			  g:;
		}*/
		int num[10];
		for(int i=0;i<10;i++)
		num[i]=0;
		for(int q=0;q<c;q++)
		num[arr[q]]++;
		for(int p=65;p<=90;p++)
		{
			int x1=p/10;
			int x2=p%10;
			if(p!=66&&p!=77&&p!=88)
			{
			if(num[x1]>0)
			{
			if(num[x2]>0)
			{
				ch=p;
				cout<<ch;
			}
		}}
			if(p==66)
			{
				if(num[6]>1)
				{
					ch=66;
					cout<<ch;
				}
			}
			if(p==77)
			{
				if(num[7]>1)
				{
					ch=77;
					cout<<ch;
				}
			}
			if(p==88)
			{
				if(num[8]>1)
				{
					ch=88;
					cout<<ch;
				}
			}
		}

	 cout<<endl;  
	}
}
