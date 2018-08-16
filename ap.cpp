/*#include<stdio.h>
int main()
{
	int t;
	long long int a,d,n,x,y,s;
	cin>>t;
	while(t--)
	{
		scanf("%lld%lld%lld",&x,&y,&s);
		n=(2*s)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		c<<n<<endl;
		long long int x=a;
		
		while(x<=((a+(n-1)*d)))
		{
		   printf("%lld ",x);
			x=x+d;
		}
		cout<<endl;
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int t;
	long long int a,d,n,x,y,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&x,&y,&s);
		n=(2*s)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		if(d==0)
		{
			printf("1\n");
			printf("%lld",a);
		}
		else{
		printf("%lld",n);
		printf("\n");
		long long int x1=a;
		while(x1<=((a+(n-1)*d)))
		{
		   printf("%lld ",x1);
			x1=x1+d;
		}
		printf("\n");}
	}
	return 0;
}
