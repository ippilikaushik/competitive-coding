
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
  
   int t;
   cin >> t;
   while(t--){
      long long n,k;
       cin >> n >> k;
       long long arr[n],sum=0;
       //cout << n;
       vector<long long> arr2(n);
       long long len = 0;
      for(long long i =0; i < n; i++){
          
          cin >> arr[i];
          sum += arr[i];
          if(arr[i]-k > 0){
              arr2[i] = arr[i]-k;
              len++;
          }
      }
       
      sort(arr2.begin(),arr2.end());

      //cout<<"lx" <<len << endl;
      for(long long i = 0; i < len; i++){
          if( (i+1) == len) break;
          sum -= 2*arr2[i];
          arr2[i] = 0;
          arr2[i+1] -= arr2[i+1];
          
      }
     cout << sum << endl;
   }
   
   return 0;
}
