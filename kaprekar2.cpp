#include<iostream>
using namespace std;
int main()
{
	int p,q;
	cin>>p>>q;
	for(int i=p;i<=q;i++)
    {
      int d=0,d1=i;
      while(d1!=0)
      {
          d1=d1/10;
          d++;
      }
      int x=i*i;
      int l=0;
      int a[10000]={0};
      int a2[10000]={0};
      while(x!=0)
      {
          int h=x%10;
          a2[l++]=h;
          x=x/10;
      }
      int k=0;
      for(int u=l-1;u>=0;u--)
      {
          a[k++]=a2[u];
      }
      /*for(int k1=0;k1<k;k1++)
      {
          cout<<a[k1];
      }*/
      
      int n1=0,n2=0,k1=k-d,k3=0;
      while(k1<k)
      {
          n2=(n2*10)+a[k1++];
      }
      //cout<<"n2"<<n2;
    while(k3<k-d)
    {
          n1=(n1*10)+a[k3++];
    }
    //cout<<"n1"<<n1;
    /*int x1=0,y1=0;
    while(n1>0)
    {
    	int e=n1%10;
    	x1=(x1*10)+e;
    	n1=n1/10;
    	
	}
	cout<<"n1"<<x1;
	while(n2>0)
    {
    	int e1=n2%10;
    	y1=(y1*10)+e1;
    	n2=n2/10;
    	
	}
	cout<<"n2"<<y1;*/
      if(n1+n2==i){
          cout<<i<<" ";
      }
    }
return 0;
}
