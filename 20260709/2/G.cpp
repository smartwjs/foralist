#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int fun(int x,int k)
{
    int res=0;
    while(x)
    {
        x/=k;
        res++;
    }
    return res;
}

int lca(int x,int y,int k)
{
    while(x!=y)
    {
        if(x>y)
        {
            x/=k;
        }
        else{
            y/=k;
        }
    }
    return x;
}

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    int sx=fun(x,k);
    int sy=fun(y,k);
    int l=lca(x,y,k);
    int sl=fun(l,k);
    int ans=sx+sy-2*sl;
    cout<<ans<<endl;
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