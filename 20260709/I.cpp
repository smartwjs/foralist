#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int a[N];

signed main()
{
    freopen("gcd.in", "r",stdin);
    freopen("gcd.out","w",stdout);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int ans=-INF;
    for(int i=1;i<=n;i++)
    {
        for(int j=k+i;j<=n;j++)
        {
            int g=0;
            for(int l=i;l<=j;l++)
            {
                g=gcd(a[l],a[l+1]);
            }
            // ans=max(g,ans);
            cout<<g<<endl;
        }
    }
    return 0;
}
