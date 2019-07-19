#include<bits/stdc++.h>
using namespace std;
int prime[1000000]={0};
void setprime()
{
    for(long int p=2;p*p<=1000000;p++)
    {
        if(!prime[p])
        for(long int j=p*p;j<=1000000;j+=p)
        prime[j]=1;
    }
    /*for(int j=2;j<=1000000;j++)
    if(!prime[j])
    cout<<j<<" ";*/
    return;
}
int main()
 {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    setprime();
    int t;
    cin>>t;
    long int n,f,j;
    while(t--)
    {
        cin>>n;
        f=0;
        j=2;
        while(j<=n/2)
        {
            if(!prime[j]&&!prime[n-j])
            {f=1;break;}
            j++;
        }
        if(f)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	return 0;
}
