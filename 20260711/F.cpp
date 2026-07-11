#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;
int a[N],b[N],c[N];
signed main()
{
    int n,m,p;
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
        c[i]=c[i-1]+min(a[i]+b[i],p);
    }
    cout<<c[n];
    return 0;
}