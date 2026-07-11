#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    if(y==0)
    {
        cout<<0;
        return;
    }
    cout<<x/y+1<<endl;
}

signed main()
{
    freopen("x2y.in","r",stdin);
    freopen("x2y.out","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
