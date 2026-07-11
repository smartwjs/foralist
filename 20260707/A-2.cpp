#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

int a[N],b[N],c[N];

signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=a[b[c[i]]];
    }
    cout<<ans;
    return 0;
}

// @pid 21 @tid 6a4c77571661baf66dedcd79 @lang cc.std14
