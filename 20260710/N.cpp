#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;
int n,m;
int mx[N];
signed main()   
{   
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        mx[r]=max(l,mx[r]);
    }
    int ans=0;
    for(int r=1;r<=n;r++)
    {
        mx[r]=max(mx[r-1],mx[r]);
        int cnt=r-mx[r];
        ans+=cnt;
    }
    cout<<ans;
    return 0;
}