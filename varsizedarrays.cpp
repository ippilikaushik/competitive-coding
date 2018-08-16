#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,q;
    cin>>n>>q;
    long int a[n][1000000];
    long int p=0;
    while(p<n)
    {
        long int x;
        cin>>x;
        for(long int i=0;i<x;i++)
            cin>>a[p][i];
        p++;
    }
    while(q--)
    {
        long int x1,q1;
        cin>>x1>>q1;
        cout<<a[x1][q1]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

