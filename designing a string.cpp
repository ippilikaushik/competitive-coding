#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    if(isgraph(k))
    {
        char c=k;
        int l=n;
        for(int r=0;r<n;r++)
            cout<<c;
        cout<<endl;
        for(int j=1;j<=n-2;j+=2)
        {
            for(int r=(l/2)-(j/2);r>0;r--)
                cout<<c;
            for(int y=0;y<j;y++)
                cout<<" ";
             for(int r=(l/2)-(j/2);r>0;r--)
                cout<<c;
            cout<<endl;
        }
        for(int j=n-4;j>=1;j-=2)
        {
            for(int r=0;r<(l/2)-(j/2);r++)
                cout<<c;
            for(int y=j;y>0;y--)
                cout<<" ";
             for(int r=0;r<(l/2)-(j/2);r++)
                cout<<c;
            cout<<endl;
        }
        for(int r=0;r<n;r++)
            cout<<c;
        cout<<endl;
    }
    else
    {
        cout<<"no";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

