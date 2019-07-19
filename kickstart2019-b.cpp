#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t1=1;
    cin>>t;
    while(t1<=t)
    {
        long long int r,c,i,j,i1,j1,l,g=0;
        cin>>r>>c;
        long long int a[r][c];
        for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        cin>>a[i][j];
        for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
        {
        for(i1=0;i1<r;i1++)
        for(j1=0;j1<c;j1++) 
        {
            if(a[i][j]==1&&a[i1][j1]==1)
            {
                l=abs(i1-i)+abs(j1-j);
                g=max(g,l);
            }
        }
        }
        }
        
        cout<<"Case #"<<t1<<": "<<g/2<<endl;
        t1++;
    }
}
