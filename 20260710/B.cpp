#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int a[N],l[N],r[N];

signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        l[i]=__gcd(l[i-1],a[i]);
    }
    for(int i=n;i>=1;i--)
    {
        r[i]=__gcd(r[i+1],a[i]);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int t=__gcd(l[i-1],r[i+1]);
        ans=max(ans,t);
    }
    cout<<ans;
    return 0;
}