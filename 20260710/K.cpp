#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int d[N];

signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    int ans=INF;
    for(int i=1;i<=n;i++)
    {
        d[i]+=d[i-1];
        ans=min(ans,d[i]);
    }
    return 0;
}