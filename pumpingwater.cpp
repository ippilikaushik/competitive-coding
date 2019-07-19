#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rec(int * arr, int s, int e){
    int max=0,ind=0;
    for(int i = s;i < e;i++){
        if(arr[i] > max){
            max = arr[i];
            ind = i;
        }
    }
    if(ind == s || ind == e-1){
        return 1;
    }
        return 1 + min(rec(arr,0,ind),rec(arr,ind+1,e));
}

int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);

   int T;
   cin >> T;
   while(T--){
       int n;
       cin >> n;
       int arr[n];
       for(int i =0 ; i< n; i++){
           int tmp;
           cin >> tmp;
           arr[i] = tmp;
           
       }
       int res = rec(arr,0,n);
       cout << res<<endl;
    
       
   }
   
   return 0;
}
