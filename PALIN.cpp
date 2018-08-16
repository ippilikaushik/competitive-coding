#include<iostream>
#include<cstring>
using namespace std;
int ispalin(string a)
{
	int n=a.length();
	for(int i=0,j=n-1;i<=n-1&&j>=0;i++,j--)
	if(a[i]!=a[j])
	return 0;
	return 1;
}
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{	
	cin>>s;
	d:
	 std::string::reverse_iterator iter = s.rbegin(), end = s.rend();
    int carry = 1;
    while (carry && iter != end)
    {
        int value = (*iter - '0') + carry;
        carry = (value / 10);
        *iter = '0' + (value % 10);
        ++iter;
    }
    if (carry)
        s.insert(0, "1");
    if(!ispalin(s))
    goto d;
    else
    cout<<s<<endl;
	}
	
return 0;
}
