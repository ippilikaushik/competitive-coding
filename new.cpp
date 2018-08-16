#include<iostream>
using namespace std;
int main()
{
	int a,c,x;
	int t;
	long int b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		c=a%10;
		if(c==0)
		cout<<"0"<<endl;
		else if(c==1)
		cout<<"1"<<endl;
		else if(c==5)
		cout<<"5"<<endl;
		else if(c==6)
		cout<<"6"<<endl;
		else if(c==4)
			{
				x=b%2;
				if(x==1)
				cout<<"4"<<endl;
				else
				cout<<"6"<<endl;
			}
		else if(c==9)
			{
				x=b%2;
				if(x==1)
				cout<<"1"<<endl;
				else
				cout<<"9"<<endl;
			}
			else if(c==2)
			{
				x=b%4;
				if(x==1)
				cout<<"2"<<endl;
				else if(x==2)
				cout<<"4"<<endl;
				else if(x==3)
				cout<<"8"<<endl;
				else if(x==0)
				cout<<"6"<<endl;
			}
			else if(c==3)
				{
				x=b%4;
				if(x==1)
				cout<<"3"<<endl;
				else if(x==2)
				cout<<"9"<<endl;
				else if(x==3)
				cout<<"7"<<endl;
				else if(x==0)
				cout<<"1"<<endl;
			}
			else if(c==7)
				{
				x=b%4;
				if(x==1)
				cout<<"7"<<endl;
				else if(x==2)
				cout<<"9"<<endl;
				else if(x==3)
				cout<<"3"<<endl;
				else if(x==0)
				cout<<"1"<<endl;
			}
			else if(c==8)
			{
				x=b%4;
				if(x==1)
				cout<<"8"<<endl;
				else if(x==2)
				cout<<"4"<<endl;
				else if(x==3)
				cout<<"2"<<endl;
				else if(x==0)
				cout<<"6"<<endl;
			}
		}
	
	
return 0;
}
/*#include<iostream>using namespace std;int main(){long int a,b,c,x;int t;cin>>t;while(t--){cin>>a>>b;c=a%10;if(c==0)cout<<"0"<<endl;else if(c==1)cout<<"1"<<endl;else if(c==5)cout<<"5"<<endl;else if(c==6)cout<<"6"<<endl;else if(c==4){x=b%2;if(x==1)cout<<"4"<<endl;else cout<<"6"<<endl;}else if(c==9){x=b%2;if(x==1)cout<<"1"<<endl;else cout<<"9"<<endl;}else if(c==2){x=b%4;if(x==1)cout<<"2"<<endl;else if(x==2)cout<<"4"<<endl;else if(x==3)cout<<"8"<<endl;else if(x==0)cout<<"6"<<endl;}else if(c==3){x=b%4;if(x==1)cout<<"3"<<endl;else if(x==2)cout<<"9"<<endl;else if(x==3)cout<<"7"<<endl;else if(x==0)cout<<"1"<<endl;}else if(c==7){x=b%4;if(x==1)cout<<"7"<<endl;else if(x==2)cout<<"9"<<endl;else if(x==3)cout<<"3"<<endl;else if(x==0)cout<<"1"<<endl;}else if(c==8){x=b%4;if(x==1)cout<<"8"<<endl;else if(x==2)cout<<"4"<<endl;else if(x==3)cout<<"2"<<endl;else if(x==0)cout<<"6"<<endl;}}return 0;}*/

