#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;
int n;
string ans;
signed main()
{
    freopen("name.in","r",stdin);
    freopen("name.out","w",stdout);
    cin>>n;
    while(n)
    {
        int r=n%26;
        n/=26;
        if(!r)
        {
            r=26;
            n-=1;
        }
        ans=ans+char(r-1+'a');
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}