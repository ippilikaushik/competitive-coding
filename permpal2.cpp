#include <bits/stdc++.h>
using namespace std;
 
// Returns true if str[curr] matches with any of the
// characters after str[start]
bool shouldSwap(string str, int start, int curr, int n)
{
    for (int i = start; i < curr; i++) 
        if (str[i] == str[curr])
            return 0;
    return 1;
}
 
// Prints all distinct permutations in str[0..n-1]
void findPermutations(string str, int index, int n)
{
	int ct=1;
    if (index >= n) {
    	string str2=str;
    	reverse(str2.begin(),str2.end());
    	if(str==str2&&ct>0)
    	{
        cout << str << endl;
        ct--;
       
        return;
    }
    }
 
    for (int i = index; i < n; i++) {
 
        // Proceed further for str[i] only if it 
        // doesn't match with any of the characters
        // after str[index]
        bool check = shouldSwap(str, index, i, n);
        if (check) {
            swap(str[index], str[i]);
            findPermutations(str, index + 1, n);
            swap(str[index], str[i]);
        }
    }
}
 
// Driver code
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    findPermutations(str, 0, n);
    return 0;
}

