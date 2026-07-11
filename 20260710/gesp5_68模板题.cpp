#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n,m;
int a[N],d[N];

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        d[i]=a[i]-a[i-1];
    }
    while(m--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        d[l]+=x;
        d[r+1]-=x;

    }
    for(int i=1;i<=n;i++)
    {
        a[i]=a[i-1]+d[i];
        cout<<a[i];
    }
    return 0;
}