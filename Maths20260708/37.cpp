#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

string fun(int n)
{
	string s="";

	if(n==0)
	{
		s="0";
		return s;
	}
	while(n)
	{
		int r=n%2;
		n/=2;
		if(r<0)
		{
			r+=2;
			n++;
		}
		s+=('0'+r);
	}
	reverse(s.begin(),s.end());
	return s;
}
signed main()
{
    int k;
    cin>>k;
    string s=fun(k);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            s[i]='2';
        }
    }
    cout<<s;
    return 0;
}
