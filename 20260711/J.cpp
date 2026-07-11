#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

signed main()
{
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0,j=n-i-1;i<n&&j>=0;i++,j--)
    {
        if(s[i]=='I'&&s[j]=='I')
        {

        }
        if(s[i]=='O'||s[j]=='O')
        {
            if(s[i+1]=='I')
            {
                
            }
        }
    }
    return 0;
}