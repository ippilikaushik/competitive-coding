#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin >> t;
   while(t--){
       int n,k;
       cin >> n >> k;
       int arr[n],sum=0;
       vector<int> arr2(n,0);
       for(int i =0; i < n; i++){
           int tmp; 
           cin >> tmp;
           arr2[i] = tmp;
           sum += tmp;
           if(tmp-k > 0){
               arr2.push_back(tmp-k);
           }
       }
       
       sort(arr2.begin(),arr2.end());
       int len = arr2.size();
    //cout<<"lx" <<len << endl;
       for(int i = 0; i < len; i++){
           if( (i+1) == arr2.size()) break;
           arr2[i] = 0;
           arr2[i+1] -= arr2[i+1];
           sum -= 2*arr2[i];
      }
      cout << sum << endl;
   }
   
   return 0;
}
