#include<iostream>
#include<string>
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
      int a[100000000]={0};
      int a2[100000000]={0};
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
      int n1=0,n2=0;
      l--;
      while(d--)
      {
          n2=(n2*10)+a[l--];
      }
    while(l>=0)
    {
          n1=(n1*10)+a[l--];
    }
      if(n1+n2==i){
          cout<<i<<" ";
      }
    }
return 0;
}
